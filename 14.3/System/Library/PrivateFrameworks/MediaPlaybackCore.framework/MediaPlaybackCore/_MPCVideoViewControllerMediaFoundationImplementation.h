@class AVPlayerViewController, NSString, MPCPlaybackEngine, UIViewController;
@protocol MPCVideoOutputDelegate;

@interface _MPCVideoViewControllerMediaFoundationImplementation : UIViewController <AVPlayerViewControllerDelegate, MPCPlaybackEngineEventObserving, MPCVideoOutput> {
    int _videoDebugToken;
    unsigned long long _stateHandle;
}

@property (readonly, weak, nonatomic) MPCPlaybackEngine *playbackEngine;
@property (readonly, nonatomic) AVPlayerViewController *internalController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MPCVideoOutputDelegate> videoOutputDelegate;
@property (readonly, nonatomic) UIViewController *playerViewController;
@property (nonatomic) BOOL showsPlaybackControls;
@property (copy, nonatomic) NSString *videoGravity;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } videoBounds;
@property (readonly, nonatomic, getter=isReadyForDisplay) BOOL readyForDisplay;

+ (id)keyPathsForValuesAffectingVideoGravity;
+ (id)keyPathsForValuesAffectingVideoBounds;
+ (id)keyPathsForValuesAffectingShowsPlaybackControls;
+ (id)keyPathsForValuesAffectingIsReadyForDisplay;

- (id)initWithPlaybackEngine:(id)a0;
- (void)forwardInvocation:(id)a0;
- (void)engineDidResetMediaServices:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (void)viewDidLayoutSubviews;
- (void)showFullScreenPresentationFromView:(id)a0 completion:(id /* block */)a1;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)exitFullScreenWithCompletion:(id /* block */)a0;
- (void)enterFullScreenWithCompletion:(id /* block */)a0;
- (void)engine:(id)a0 willChangeToItem:(id)a1 fromItem:(id)a2;
- (void)viewDidLoad;
- (id)_stateDictionary;
- (void)_updateViewControllerHierarchyForPlaybackEngine:(id)a0;

@end
