@class NSString;
@protocol STStatusDomainData, STStatusDomainServerHandle;

@interface STStatusDomain : NSObject <STStatusDomainClientHandle>

@property (class, readonly, nonatomic) unsigned long long statusDomainName;

@property (copy, nonatomic) id /* block */ dataChangedBlock;
@property (readonly, nonatomic) id<STStatusDomainServerHandle> serverHandle;
@property (readonly, copy, nonatomic) id<STStatusDomainData> data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithServerHandle:(id)a0;
- (void)observeDataWithBlock:(id /* block */)a0;
- (void)observeData:(id)a0 forDomain:(unsigned long long)a1;

@end
