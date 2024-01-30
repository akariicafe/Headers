@class UIStatusBarStyleRequest, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarStyleAttributes : NSObject <NSCopying> {
    UIStatusBarStyleRequest *_request;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property (nonatomic) double foregroundAlpha;
@property (nonatomic, getter=isPulsingAnimationEnabled) BOOL pulsingAnimationEnabled;

- (double)foregroundAlpha;
- (id)backgroundColorWithTintColor:(id)a0;
- (BOOL)isTransparent;
- (double)heightForMetrics:(long long)a0;
- (long long)idiom;
- (long long)legibilityStyle;
- (void)setForegroundAlpha:(double)a0;
- (BOOL)isDoubleHeight;
- (id)initWithRequest:(id)a0;
- (BOOL)isTranslucent;
- (id)newForegroundStyleWithHeight:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (long long)tapButtonType;
- (BOOL)shouldShowInternalItemType:(int)a0 withScreenCapabilities:(id)a1;
- (id)init;
- (id)backgroundImageName;
- (long long)style;
- (BOOL)shouldUseVisualAltitude;
- (BOOL)shouldProduceReturnEvent;
- (void).cxx_destruct;
- (double)heightForOrientation:(long long)a0;
- (BOOL)isLockScreen;
- (id)foregroundStyle;
- (double)glowAnimationDuration;
- (BOOL)supportsRasterization;
- (BOOL)usesVerticalLayout;

@end
