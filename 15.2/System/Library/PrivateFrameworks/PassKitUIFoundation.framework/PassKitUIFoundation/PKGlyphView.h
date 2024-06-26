@class NSString, LAUIPearlGlyphView, LAUICheckmarkLayer, CALayer, PKPhoneGlyphLayer, PKMicaLayer, PKFingerprintGlyphView, NSMutableArray, NSObject, UIColor;
@protocol PKGlyphViewDelegate, OS_dispatch_group;

@interface PKGlyphView : UIView <PKFingerprintGlyphViewDelegate, LAUIPearlGlyphViewDelegate> {
    long long _style;
    BOOL _isPad;
    unsigned long long _transitionIndex;
    BOOL _transitioning;
    BOOL _transitioningAnimated;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    NSObject<OS_dispatch_group> *_lastAnimationGroup;
    double _lastAnimationWillFinish;
    BOOL _phoneWiggling;
    NSString *_phoneWiggleAnimationKey;
    struct { unsigned char showingPhone : 1; unsigned char phoneRotated : 1; unsigned char showingUserIntentPhone : 1; unsigned char showingUserIntentArrow : 1; } _layoutFlags;
    PKFingerprintGlyphView *_fingerprintView;
    LAUIPearlGlyphView *_pearlView;
    PKPhoneGlyphLayer *_phoneLayer;
    LAUICheckmarkLayer *_checkLayer;
    CALayer *_userIntentLayer;
    PKMicaLayer *_userIntentArrowLayer;
    PKMicaLayer *_userIntentDeviceLayer;
    double _phoneAspectRatio;
    CALayer *_customImageLayer;
    UIColor *_secondaryColor;
    UIColor *_primaryHighlightColor;
    UIColor *_intentPrimaryHighlightColor;
    UIColor *_secondaryHighlightColor;
}

@property (readonly, nonatomic) long long colorMode;
@property (readonly, copy, nonatomic) UIColor *primaryColor;
@property (nonatomic) BOOL fadeOnRecognized;
@property (readonly, nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } customImageAlignmentEdgeInsets;
@property (readonly, nonatomic) struct CGImage { } *customImage;
@property (readonly, nonatomic) long long state;
@property (readonly, nonatomic) unsigned int userIntentEdge;
@property (weak, nonatomic) id<PKGlyphViewDelegate> delegate;
@property (nonatomic) BOOL showQRCode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedStaticResources;
+ (void)invokeSuccessFeedback;
+ (BOOL)automaticallyNotifiesObserversOfState;

- (void)layoutSubviews;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)setState:(long long)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithStyle:(long long)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)tintColorDidChange;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)setState:(long long)a0 animated:(BOOL)a1 completionHandler:(id /* block */)a2;
- (void)updateRasterizationScale:(double)a0;
- (void)setCustomImage:(struct CGImage { } *)a0 withAlignmentEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a1;
- (void)updateRotation;
- (void)setColorMode:(long long)a0 animated:(BOOL)a1;
- (void)_executeTransitionCompletionHandlers:(BOOL)a0;
- (void)fingerprintGlyphView:(id)a0 didLayoutContentLayer:(id)a1;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)a0;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(id /* block */)a0;
- (void)_startPhoneWiggle;
- (void)_endPhoneWiggle;
- (id)createCustomImageLayer;
- (void)_applyColorMode:(BOOL)a0;
- (void)_applyEffectiveHighlightColorsToLayersAnimated:(BOOL)a0;
- (void)_updateUserIntentLayerRotation;
- (void)_applyEffectivePrimaryColorToLayersAnimated:(BOOL)a0;
- (void)_updateUserIntentLayoutAnimated:(BOOL)a0;
- (void)_updatePhoneLayoutWithTransitionIndex:(unsigned long long)a0 animated:(BOOL)a1;
- (void)_executeAfterMinimumAnimationDurationForStateTransitionWithDelayRatio:(double)a0 handler:(id /* block */)a1;
- (void)_updatePhoneWiggleIfNecessary;
- (void)_updateCustomImageLayerOpacityAnimated:(BOOL)a0;
- (void)_updateCheckViewStateAnimated:(BOOL)a0 withCompletion:(id /* block */)a1;
- (void)_finishTransitionForIndex:(unsigned long long)a0 cancelled:(BOOL)a1;
- (void)_setRecognizedIfNecessaryWithTransitionIndex:(unsigned long long)a0 completion:(id /* block */)a1;
- (struct CGPoint { double x0; double x1; })_phonePositionWhileShownWithRotationPercentage:(double)a0;
- (struct CATransform3D { double x0; double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; })_phoneTransformDeltaWhileShownFromRotationPercentage:(double)a0 toPercentage:(double)a1;
- (struct CGPoint { double x0; double x1; })_phonePositionDeltaWhileShownFromRotationPercentage:(double)a0 toPercentage:(double)a1;
- (id)_primaryColorForStyle:(long long)a0 mode:(long long)a1;
- (void)_setPrimaryColor:(id)a0 animated:(BOOL)a1;
- (id)_secondaryColorForStyle:(long long)a0 mode:(long long)a1;
- (void)_setSecondaryColor:(id)a0 animated:(BOOL)a1;
- (void)_layoutContentLayer:(id)a0;
- (void)pearlGlyphView:(id)a0 didLayoutContentLayer:(id)a1;

@end
