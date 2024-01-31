@class AVPlayer, MPMediaControls, AVMicaPackage, UIViewPropertyAnimator, AVOutputContext, UIButton, AVCustomRoutingController, NSObject, AVRoutingConfiguration, AVObservationController, UIColor;
@protocol OS_dispatch_queue, AVRoutePickerViewDelegate;

@interface AVRoutePickerView : UIView {
    NSObject<OS_dispatch_queue> *_getAirPlayStatusQueue;
    UIColor *_activeTintColor;
    UIButton *_routePickerButton;
    UIButton *_customButton;
    struct CGSize { double width; double height; } _oldSize;
    UIViewPropertyAnimator *_buttonHighlightAnimator;
    AVObservationController *_observationController;
    AVOutputContext *_outputContext;
    AVRoutingConfiguration *_routingConfiguration;
    AVCustomRoutingController *_customRoutingController;
    BOOL _airPlayActive;
    BOOL _prioritizesVideoDevices;
    AVMicaPackage *_routePickerButtonMicaPackage;
    MPMediaControls *_routePickingControls;
}

@property (weak, nonatomic) id<AVRoutePickerViewDelegate> delegate;
@property (retain, nonatomic) AVPlayer *player;
@property (nonatomic, getter=isRoutePickerButtonBordered) BOOL routePickerButtonBordered;
@property (retain, nonatomic) UIColor *activeTintColor;
@property (nonatomic) long long routePickerButtonStyle;
@property (nonatomic) BOOL prioritizesVideoDevices;
@property (retain, nonatomic) AVCustomRoutingController *customRoutingController;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_normalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;
- (void)_registerNotifications;
- (void)dealloc;
- (id)customButton;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_routePickerButtonTouchUp:(id)a0;
- (void)tintColorDidChange;
- (void)setCustomButton:(id)a0;
- (void)setAirPlayActive:(BOOL)a0;
- (BOOL)_isAirPlayOrCustomRouteActive;
- (id)topViewControllerForPresentingAlert;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_routePickerButtonTouchDragEnter:(id)a0;
- (void)_customRoutingItemsDidChange;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (BOOL)isAirPlayActive;
- (void)updateButtonAppearance;
- (void)_routePickerButtonTouchDown:(id)a0;
- (void)setRoutingConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)_updateAirPlayActive;
- (void)presentRoutePicker:(id)a0;
- (id)_defaultActiveTintColor;
- (void)layoutSubviews;
- (void)_setRoutePickerButtonAlpha:(double)a0 animated:(BOOL)a1;
- (void)_setupOutputContext;
- (void)_createOrUpdateRoutePickerButton;
- (id)routingConfiguration;
- (void)_routePickerButtonTapped:(id)a0;
- (void)_addCustomRoutingItemsToRoutePickingControls;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;

@end
