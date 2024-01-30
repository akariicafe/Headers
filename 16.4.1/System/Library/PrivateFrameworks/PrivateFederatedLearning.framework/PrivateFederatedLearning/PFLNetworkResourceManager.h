@protocol PFLNetworkHandler;

@interface PFLNetworkResourceManager : NSObject

@property (readonly, nonatomic) id<PFLNetworkHandler> networkHandler;

- (void).cxx_destruct;
- (id)_saveModel:(id)a0 fromLocation:(id)a1;
- (void)fetchConfigurationWithHandler:(id /* block */)a0;
- (void)handleResultsForIdentifier:(id)a0 results:(id)a1 completion:(id /* block */)a2;
- (id)initWithNetworkHandler:(id)a0;
- (void)prepareModelResourceForTask:(id)a0 modelIdentifier:(id)a1 fromTemporaryLocation:(id)a2 completion:(id /* block */)a3;

@end
