@class _TVRUITouchpadView, _TVRUIDirectionalControlView, NSString, UIView;
@protocol _TVRUIEventDelegate, TVRUIDevice, TVRUIStyleProvider, TVRUITouchProcessor;

@interface TVRUITouchpadViewController : UIViewController <_TVRUIEventDelegate, UIPointerInteractionDelegate, TVRUIRemoteViewProvider>

@property (retain, nonatomic) _TVRUITouchpadView *touchpadView;
@property (retain, nonatomic) _TVRUIDirectionalControlView *directionalControlView;
@property (retain, nonatomic) id<TVRUIDevice> remoteDevice;
@property (retain, nonatomic) id<TVRUIStyleProvider> styleProvider;
@property (nonatomic) long long touchpadMode;
@property (retain, nonatomic) id<TVRUITouchProcessor> touchProcessor;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) id<_TVRUIEventDelegate> eventDelegate;
@property (nonatomic, getter=isShowingControls) BOOL showControls;
@property (nonatomic, getter=areMediaControlsVisible) BOOL mediaControlsAreVisible;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)pointerInteraction:(id)a0 willEnterRegion:(id)a1 animator:(id)a2;
- (void)setDevice:(id)a0;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (BOOL)_canShowWhileLocked;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)_darkenSystemColorsChanged:(id)a0;
- (void)transitonToViewForDeviceType:(long long)a0;
- (void)_setupTouchpadView;
- (void)_transitionToDirectionalControlView;
- (void)_transitionToTouchpadView;
- (void)_simpleRemoteGesturesEnabled:(id)a0;
- (void)_setupDirectionalArrowView;
- (void)_toggleControlScale;
- (void)_transitionToAppropriateView;

@end
