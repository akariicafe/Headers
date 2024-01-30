@class MPMediaControls, NSString, AVMicaPackage, UIViewPropertyAnimator, AVOutputContext, UIButton, NSObject, AVObservationController, UIColor;
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
    BOOL _airPlayActive;
    BOOL _prioritizesVideoDevices;
    AVMicaPackage *_routePickerButtonMicaPackage;
    MPMediaControls *_routePickingControls;
}

@property (copy, nonatomic) NSString *overrideRoutingContextUID;
@property (weak, nonatomic) id<AVRoutePickerViewDelegate> delegate;
@property (retain, nonatomic) UIColor *activeTintColor;
@property (nonatomic) long long routePickerButtonStyle;
@property (nonatomic) BOOL prioritizesVideoDevices;

- (void)tintColorDidChange;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void).cxx_destruct;
- (void)updateButtonAppearance;
- (void)dealloc;
- (BOOL)isAirPlayActive;
- (id)initWithCoder:(id)a0;
- (void)didMoveToWindow;
- (void)setAirPlayActive:(BOOL)a0;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_registerNotifications;
- (void)setCustomButton:(id)a0;
- (void)_createOrUpdateRoutePickerButton;
- (void)_routePickerButtonTapped:(id)a0;
- (void)_routePickerButtonTouchDown:(id)a0;
- (void)_routePickerButtonTouchDragEnter:(id)a0;
- (void)_routePickerButtonTouchUp:(id)a0;
- (void)_setRoutePickerButtonAlpha:(double)a0 animated:(BOOL)a1;
- (void)_updateAirPlayActive;
- (void)_setupOutputContext;
- (BOOL)_isAirPlayActive;
- (id)_defaultActiveTintColor;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_normalizedRectInWindow;
- (id)customButton;

@end
