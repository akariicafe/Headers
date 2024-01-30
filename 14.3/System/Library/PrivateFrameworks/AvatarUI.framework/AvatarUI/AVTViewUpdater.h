@class AVTView, NSString, AVTAvatar, NSObject;
@protocol OS_dispatch_queue, AVTUILogger, AVTAvatarRecord;

@interface AVTViewUpdater : NSObject <SCNSceneRendererDelegate, AVTViewDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
@property (readonly, nonatomic) id<AVTUILogger> logger;
@property (copy, nonatomic) id /* block */ avatarUpdatedHandler;
@property (retain, nonatomic) id<AVTAvatarRecord> avatarRecord;
@property (retain, nonatomic) AVTAvatar *currentAvatar;
@property (readonly, nonatomic) AVTView *avtView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithAVTView:(id)a0 logger:(id)a1;
- (void)setAvatarRecord:(id)a0 avatar:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithAVTView:(id)a0 callbackQueue:(id)a1 logger:(id)a2;
- (void)avatarView:(id)a0 didRenderAvatar:(id)a1;
- (void)setAvatarRecord:(id)a0 completionHandler:(id /* block */)a1;

@end
