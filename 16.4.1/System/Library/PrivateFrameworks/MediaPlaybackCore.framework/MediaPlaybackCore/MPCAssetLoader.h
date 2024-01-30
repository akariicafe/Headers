@class NSOperationQueue, MPCPlayerItemConfigurator;
@protocol MPCAssetLoaderDelegate;

@interface MPCAssetLoader : NSObject <MFAssetLoading>

@property (readonly, nonatomic) NSOperationQueue *loadingQueue;
@property (weak, nonatomic) id<MPCAssetLoaderDelegate> delegate;
@property (retain, nonatomic) MPCPlayerItemConfigurator *configurator;

- (void)cancelLoading;
- (id)initWithDelegate:(id)a0;
- (void).cxx_destruct;
- (void)loadAssetFor:(id)a0 token:(long long)a1 completion:(id /* block */)a2;

@end
