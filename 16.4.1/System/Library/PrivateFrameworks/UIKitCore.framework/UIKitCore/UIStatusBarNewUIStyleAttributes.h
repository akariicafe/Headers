@class UIColor;

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes {
    UIColor *_backgroundColor;
    UIColor *_foregroundColor;
    BOOL _hasBusyBackground;
}

- (Class)foregroundStyleClass;
- (id)backgroundColorWithTintColor:(id)a0;
- (BOOL)isTransparent;
- (long long)legibilityStyle;
- (id)initWithRequest:(id)a0;
- (id)foregroundColor;
- (BOOL)isTranslucent;
- (id)newForegroundStyleWithHeight:(double)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithRequest:(id)a0 backgroundColor:(id)a1 foregroundColor:(id)a2;
- (id)initWithRequest:(id)a0 backgroundColor:(id)a1 foregroundColor:(id)a2 hasBusyBackground:(BOOL)a3;
- (BOOL)shouldUseVisualAltitude;
- (void).cxx_destruct;

@end
