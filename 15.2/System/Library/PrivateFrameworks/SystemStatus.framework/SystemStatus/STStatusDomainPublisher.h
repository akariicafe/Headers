@class NSString;
@protocol STStatusDomainPublisherServerHandle, STStatusDomainData, STStatusDomainDataDifferencing;

@interface STStatusDomainPublisher : NSObject <STStatusDomainPublisherClientHandle>

@property (class, readonly, nonatomic) unsigned long long statusDomainName;
@property (class, readonly, copy, nonatomic) id<STStatusDomainData, STStatusDomainDataDifferencing> emptyData;

@property (readonly, nonatomic) id<STStatusDomainPublisherServerHandle> serverHandle;
@property (nonatomic, getter=isInvalidated) BOOL invalidated;
@property (copy, nonatomic) id<STStatusDomainData> data;
@property (copy, nonatomic) id<STStatusDomainData> volatileData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithServerHandle:(id)a0;
- (void)handleUserInteraction:(id)a0 forDomain:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;
- (void)updateVolatileDataWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)updateVolatileDataWithBlock:(id /* block */)a0;
- (void)updateDataWithBlock:(id /* block */)a0;
- (void)_setData:(id)a0 completion:(id /* block */)a1;
- (void)_updateDataWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)_setVolatileData:(id)a0 completion:(id /* block */)a1;
- (void)_updateVolatileDataWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)setData:(id)a0 completion:(id /* block */)a1;
- (void)updateDataWithBlock:(id /* block */)a0 completion:(id /* block */)a1;
- (void)setVolatileData:(id)a0 completion:(id /* block */)a1;

@end
