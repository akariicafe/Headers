@class UIView, NSAttributedString, NSString, UIImage, AAUIBadgeModelConfiguration, UITapGestureRecognizer, UILongPressGestureRecognizer, AAUIBadge, UIPanGestureRecognizer, NSDictionary, NSNumber;
@protocol AAUIBadgeViewDrawable, AAUIBadgeViewDelegate;

@interface AAUIBadgeView : UIView <UIGestureRecognizerDelegate, AAUIBadgeViewDrawableDelegate, AAUIBadgeViewDrawable> {
    BOOL _useEarnedShader;
    AAUIBadge *_badge;
    UIImage *_backAppleLogo;
    NSAttributedString *_backsideAttributedString;
    UIPanGestureRecognizer *_spinRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    UILongPressGestureRecognizer *_longPressRecognizer;
    NSDictionary *_tweakableUniforms;
    double _lastUpdateTime;
    double _spinRate;
}

@property (retain, nonatomic) id<AAUIBadgeViewDrawable> drawable;
@property (retain, nonatomic) NSNumber *useMetal;
@property (retain, nonatomic) NSNumber *overrideEarnedShader;
@property (nonatomic) BOOL magnetsEngaged;
@property (copy, nonatomic) id /* block */ shortenedBadgeBacksideStringProvider;
@property (nonatomic) BOOL verticalPanningDisabled;
@property (weak, nonatomic) id<AAUIBadgeViewDelegate> badgeDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) UIView *view;
@property (retain, nonatomic) AAUIBadgeModelConfiguration *configuration;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) UIImage *backTextureImage;

+ (double)badgeAspectRatio;

- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(long long)a0;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (long long)preferredStatusBarStyle;
- (id)snapshot;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (double)timeSinceLastUpdate;
- (void)_tapped:(id)a0;
- (void)_spin360Degrees;
- (id)initUsingEarnedShader:(BOOL)a0 delegate:(id)a1;
- (id)_valueForTweak:(id)a0;
- (void)_applyImpulse:(double)a0;
- (double)_attenuatedSpinRate:(double)a0;
- (double)_attenuatedVelocity:(double)a0;
- (id)_defaultTweaks;
- (void)_generateBackTextureImage;
- (void)_invalidateLastUpdateTime;
- (void)_longPressInternalOnly:(id)a0;
- (float)_normalizeAngle:(float)a0;
- (void)_panned:(id)a0;
- (void)_setBackTextureNeedsRegeneration;
- (id)_unearnedShaderDefaultTweaks;
- (void)cleanupAfterSnapshot;
- (id)drawable:(id)a0 valueForTweakableUniform:(id)a1;
- (id)initUsingEarnedShader:(BOOL)a0;
- (double)playFlipInAnimation;
- (double)playFlipOutAnimation;
- (void)resizeBadgeForCurrentViewSize;
- (void)setBadgeBacksideAttributedString:(id)a0;
- (void)setBadgeBacksideIcon:(id)a0;
- (void)setFixedBadgeAngle:(double)a0;
- (id)tweakableUniformsForDrawable:(id)a0;
- (id)updateBadgeModelForDrawable:(id)a0;

@end
