@class NSString;
@protocol STStatusDomainData, STStatusDomainServerHandle;

@interface STStatusDomain : NSObject <STStatusDomainClientHandle> {
    BOOL _invalidated;
    id /* block */ _dataChangedBlock;
    id /* block */ _dataChangedWithContextBlock;
}

@property (class, readonly, nonatomic) unsigned long long statusDomainName;

@property (readonly, nonatomic) id<STStatusDomainServerHandle> serverHandle;
@property (readonly, copy, nonatomic) id<STStatusDomainData> data;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServerHandle:(id)a0;
- (void)observeData:(id /* block */)a0;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1 withChangeContext:(id)a2;
- (void)observeDataWithBlock:(id /* block */)a0;

@end
