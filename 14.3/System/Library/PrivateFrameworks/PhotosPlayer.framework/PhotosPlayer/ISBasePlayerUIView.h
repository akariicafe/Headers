@class UIView, NSString, UIImage, ISPlayerOutputContent, UIImageView, NSObject, ISVideoPlayerUIView, CAMeshTransform, ISBasePlayer, ISWrappedAVAudioSession;
@protocol OS_dispatch_queue, ISBasePlayerUIViewChangeObserver;

@interface ISBasePlayerUIView : UIView <ISChangeObserver, ISBasePlayerOutput> {
    NSObject<OS_dispatch_queue> *_audioSessionQueue;
    ISPlayerOutputContent *_content;
    struct { BOOL didChangeWithAnimationDuration; } _changeObserverRespondsTo;
}

@property (readonly, nonatomic) UIView *containerView;
@property (readonly, nonatomic) UIView *videoContainerView;
@property (retain, nonatomic, setter=_setWrappedAudioSession:) ISWrappedAVAudioSession *wrappedAudioSession;
@property (weak, nonatomic, setter=_setChangeObserver:) id<ISBasePlayerUIViewChangeObserver> _changeObserver;
@property (readonly, nonatomic) ISVideoPlayerUIView *videoBlurView;
@property (readonly, nonatomic) UIImageView *photoView;
@property (readonly, nonatomic) ISVideoPlayerUIView *videoView;
@property (retain, nonatomic) ISBasePlayer *player;
@property (nonatomic) struct CGPoint { double x; double y; } scaleAnchorOffset;
@property (retain, nonatomic) UIView *customPhotoView;
@property (retain, nonatomic) UIImage *overrideImage;
@property (readonly, nonatomic, getter=isDisplayingPhoto) BOOL displayingPhoto;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentsRect;
@property (copy, nonatomic) id /* block */ videoLayerReadyForDisplayChangeHandler;
@property (copy, nonatomic) CAMeshTransform *videoTransform;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isVideoReadyForDisplay;

+ (Class)playerClass;

- (void)contentDidChange;
- (void)registerChangeObserver:(id)a0;
- (void)unregisterChangeObserver:(id)a0;
- (void).cxx_destruct;
- (void)setContentMode:(long long)a0;
- (void)observable:(id)a0 didChange:(unsigned long long)a1 context:(void *)a2;
- (id)initWithCoder:(id)a0;
- (id)generateSnapshotImage;
- (void)audioSessionDidChange;
- (void)layoutSubviews;
- (void)playerDidChange;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setContent:(id)a0;
- (void)_updatePhotoView;
- (void)_performCommonInitialization;
- (void)applyScale:(double)a0 withTransitionOptions:(id)a1 completion:(id /* block */)a2;
- (void)applyOutputInfo:(id)a0 withTransitionOptions:(id)a1 completion:(id /* block */)a2;
- (void)_videoViewReadyForDisplayDidChange;
- (void)_updatePlayerAudioSession;
- (void)_signalChange:(unsigned long long)a0 withAnimationDuration:(double)a1;

@end
