@class AVTCoreEnvironment;
@protocol AVTStickerBackend, AVTPBackendImageHandlingDelegate;

@interface AVTStickerChangeObserver : NSObject

@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (readonly, nonatomic) id<AVTStickerBackend> stickerBackend;
@property (weak, nonatomic) id<AVTPBackendImageHandlingDelegate> imageHandlingDelegate;

- (void).cxx_destruct;
- (id)initWithStickerBackend:(id)a0 environment:(id)a1;
- (void)processChangesForChangeTracker:(id)a0 completionHandler:(id /* block */)a1;

@end
