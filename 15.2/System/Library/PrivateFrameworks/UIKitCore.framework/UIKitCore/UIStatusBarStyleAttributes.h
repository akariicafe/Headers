@class UIStatusBarStyleRequest, UIStatusBarForegroundStyleAttributes;

@interface UIStatusBarStyleAttributes : NSObject <NSCopying> {
    UIStatusBarStyleRequest *_request;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property (nonatomic) double foregroundAlpha;
@property (nonatomic, getter=isPulsingAnimationEnabled) BOOL pulsingAnimationEnabled;

- (double)heightForMetrics:(long long)a0;
- (BOOL)isTransparent;
- (id)initWithRequest:(id)a0;
- (BOOL)isTranslucent;
- (BOOL)shouldProduceReturnEvent;
- (id)backgroundColorWithTintColor:(id)a0;
- (BOOL)shouldUseVisualAltitude;
- (id)newForegroundStyleWithHeight:(double)a0;
- (BOOL)isDoubleHeight;
- (long long)style;
- (double)foregroundAlpha;
- (long long)legibilityStyle;
- (BOOL)usesVerticalLayout;
- (double)glowAnimationDuration;
- (id)foregroundStyle;
- (BOOL)supportsRasterization;
- (BOOL)isLockScreen;
- (void)setForegroundAlpha:(double)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)shouldShowInternalItemType:(int)a0 withScreenCapabilities:(id)a1;
- (long long)tapButtonType;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (double)heightForOrientation:(long long)a0;
- (id)backgroundImageName;
- (long long)idiom;

@end
