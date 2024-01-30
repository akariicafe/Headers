@class NSOperationQueue, MPCPlayerItemConfigurator;
@protocol MPCAssetLoaderDelegate;

@interface MPCAssetLoader : NSObject <MFAssetLoading>

@property (readonly, nonatomic) NSOperationQueue *loadingQueue;
@property (weak, nonatomic) id<MPCAssetLoaderDelegate> delegate;
@property (retain, nonatomic) MPCPlayerItemConfigurator *configurator;

- (void).cxx_destruct;
- (void)cancelLoading;
- (id)initWithDelegate:(id)a0;
- (void)loadAssetFor:(id)a0 token:(long long)a1 completion:(id /* block */)a2;

@end
