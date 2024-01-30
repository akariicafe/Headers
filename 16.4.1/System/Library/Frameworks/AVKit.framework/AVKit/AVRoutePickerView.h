@class MPMediaControls, AVMicaPackage, UIViewPropertyAnimator, AVOutputContext, UIButton, AVCustomRoutingController, NSObject, AVRoutingConfiguration, AVObservationController, UIColor;
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
@property (retain, nonatomic) UIColor *activeTintColor;
@property (nonatomic) long long routePickerButtonStyle;
@property (nonatomic) BOOL prioritizesVideoDevices;
@property (retain, nonatomic) AVCustomRoutingController *customRoutingController;

- (void)_updateAirPlayActive;
- (BOOL)isAirPlayActive;
- (void)_customRoutingItemsDidChange;
- (void)_routePickerButtonTouchDown:(id)a0;
- (void)setCustomButton:(id)a0;
- (void)_setupOutputContext;
- (BOOL)_isAirPlayOrCustomRouteActive;
- (void)setRoutingConfiguration:(id)a0;
- (id)customButton;
- (void)_routePickerButtonTouchUp:(id)a0;
- (void)_createOrUpdateRoutePickerButton;
- (void)updateButtonAppearance;
- (id)routingConfiguration;
- (void)_addCustomRoutingItemsToRoutePickingControls;
- (void)_routePickerButtonTapped:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_normalizedRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 fromView:(id)a1;
- (void)_routePickerButtonTouchDragEnter:(id)a0;
- (void)setAirPlayActive:(BOOL)a0;
- (id)_defaultActiveTintColor;
- (void)presentRoutePicker:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })alignmentRectInsets;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)_registerNotifications;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)layoutSubviews;
- (void)_setRoutePickerButtonAlpha:(double)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
