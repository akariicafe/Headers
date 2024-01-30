@class AVTView, NSString, AVTAvatar, NSObject;
@protocol OS_dispatch_queue, AVTUILogger, AVTAvatarRecord;

@interface AVTViewUpdater : NSObject <SCNSceneRendererDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    double _lastUpdateTimestamp;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) AVTAvatar *currentAvatar;
@property (readonly, nonatomic) AVTView *avtView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)willUpdateViewForRecord:(id)a0 avatar:(id)a1;
- (void)addAvatarPresentedOnScreenCallbackWithQueue:(id /* block */)a0 forTimestamp:(double)a1;
- (id)initWithAVTView:(id)a0 callbackQueue:(id)a1 logger:(id)a2;
- (id)initWithAVTView:(id)a0 logger:(id)a1;
- (void)setAvatarRecord:(id)a0 avatar:(id)a1 completionHandler:(id /* block */)a2;
- (void)setAvatarRecord:(id)a0 completionHandler:(id /* block */)a1;
- (void)setStickerConfiguration:(id)a0 completionHandler:(id /* block */)a1;

@end
