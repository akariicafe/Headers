@class NSString;
@protocol STStatusDomainData, STStatusDomainServerHandle;

@interface STStatusDomain : NSObject <STStatusDomainClientHandle>

@property (class, readonly, nonatomic) unsigned long long statusDomainName;

@property (copy, nonatomic) id /* block */ dataChangedBlock;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic) id<STStatusDomainServerHandle> serverHandle;
@property (readonly, copy, nonatomic) id<STStatusDomainData> data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServerHandle:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)observeDataWithBlock:(id /* block */)a0;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1;

@end
