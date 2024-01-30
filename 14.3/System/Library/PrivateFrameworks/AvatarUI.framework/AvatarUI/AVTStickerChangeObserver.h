@class AVTImageStore, AVTCoreEnvironment;
@protocol AVTStickerBackend;

@interface AVTStickerChangeObserver : NSObject

@property (readonly, nonatomic) AVTCoreEnvironment *environment;
@property (readonly, nonatomic) id<AVTStickerBackend> stickerBackend;
@property (readonly, nonatomic) AVTImageStore *imageStore;

- (id)initWithStickerBackend:(id)a0 environment:(id)a1;
- (void)processChangesForChangeTracker:(id)a0 completionHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithStickerBackend:(id)a0 imageStore:(id)a1 environment:(id)a2;

@end
