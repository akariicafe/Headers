@class UIColor;

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    BOOL _hasBusyBackground;
}

- (id)initWithRequest:(id)a0 backgroundColor:(id)a1 foregroundColor:(id)a2 hasBusyBackground:(BOOL)a3;
- (Class)foregroundStyleClass;
- (BOOL)isTransparent;
- (id)initWithRequest:(id)a0;
- (BOOL)isTranslucent;
- (id)foregroundColor;
- (id)backgroundColorWithTintColor:(id)a0;
- (BOOL)shouldUseVisualAltitude;
- (id)newForegroundStyleWithHeight:(double)a0;
- (id)initWithRequest:(id)a0 backgroundColor:(id)a1 foregroundColor:(id)a2;
- (long long)legibilityStyle;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
