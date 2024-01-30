@class MPAVItem, MPCPlayerItemConfigurator, NSObject, NSError;
@protocol OS_dispatch_queue, MPCAssetLoaderDelegate;

@interface MPCAssetLoadingOperation : NSOperation {
    BOOL _isExecuting;
    BOOL _isFinished;
}

@property (readonly, copy, nonatomic) MPAVItem *item;
@property (weak, nonatomic) id<MPCAssetLoaderDelegate> delegate;
@property (retain, nonatomic) MPCPlayerItemConfigurator *configurator;
@property (readonly, nonatomic) long long token;
@property (readonly, copy, nonatomic) id /* block */ completion;
@property (readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (retain, nonatomic) NSError *error;

- (BOOL)isFinished;
- (void)start;
- (BOOL)isExecuting;
- (void)main;
- (void).cxx_destruct;
- (id)initWithPlayerItem:(id)a0 configurator:(id)a1 delegate:(id)a2 token:(long long)a3 callbackQueue:(id)a4 completion:(id /* block */)a5;
- (BOOL)_configureItem:(id)a0 error:(id *)a1;

@end
