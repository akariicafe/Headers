@class UIStatusBarStyleRequest, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarStyleAttributes : NSObject <NSCopying> {
    UIStatusBarStyleRequest *_request;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property (nonatomic) double foregroundAlpha;
@property (nonatomic, getter=isPulsingAnimationEnabled) BOOL pulsingAnimationEnabled;

- (id)initWithRequest:(id)a0;
- (BOOL)isTranslucent;
- (double)heightForMetrics:(long long)a0;
- (id)newForegroundStyleWithHeight:(double)a0;
- (double)foregroundAlpha;
- (BOOL)isDoubleHeight;
- (double)heightForOrientation:(long long)a0;
- (id)init;
- (void).cxx_destruct;
- (long long)tapButtonType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setForegroundAlpha:(double)a0;
- (BOOL)shouldProduceReturnEvent;
- (long long)style;
- (BOOL)shouldUseVisualAltitude;
- (long long)legibilityStyle;
- (id)backgroundColorWithTintColor:(id)a0;
- (BOOL)isTransparent;
- (id)backgroundImageName;
- (double)glowAnimationDuration;
- (BOOL)supportsRasterization;
- (long long)idiom;
- (BOOL)shouldShowInternalItemType:(int)a0 withScreenCapabilities:(id)a1;
- (BOOL)isLockScreen;
- (BOOL)usesVerticalLayout;
- (id)foregroundStyle;

@end
