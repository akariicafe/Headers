@class NSObject, MPCPlayerItemConfigurator, MPAVItem;
@protocol OS_dispatch_queue, MPCAssetLoaderDelegate;

@interface MPCAssetLoadingOperation : NSOperation

@property (readonly, copy, nonatomic) MPAVItem *item;
@property (weak, nonatomic) id<MPCAssetLoaderDelegate> delegate;
@property (retain, nonatomic) MPCPlayerItemConfigurator *configurator;
@property (readonly, nonatomic) long long token;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;

- (void).cxx_destruct;
- (void)main;
- (id)initWithPlayerItem:(id)a0 configurator:(id)a1 delegate:(id)a2 token:(long long)a3 callbackQueue:(id)a4 completion:(id /* block */)a5;

@end
