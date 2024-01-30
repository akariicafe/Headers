@class UIColor;

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    BOOL _hasBusyBackground;
}

- (id)foregroundColor;
- (id)initWithRequest:(id)a0;
- (BOOL)isTranslucent;
- (id)newForegroundStyleWithHeight:(double)a0;
- (id)initWithRequest:(id)a0 backgroundColor:(id)a1 foregroundColor:(id)a2 hasBusyBackground:(BOOL)a3;
- (void).cxx_destruct;
- (Class)foregroundStyleClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldUseVisualAltitude;
- (long long)legibilityStyle;
- (id)backgroundColorWithTintColor:(id)a0;
- (BOOL)isTransparent;
- (id)initWithRequest:(id)a0 backgroundColor:(id)a1 foregroundColor:(id)a2;

@end
