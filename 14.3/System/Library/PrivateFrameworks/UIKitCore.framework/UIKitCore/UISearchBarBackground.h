@class UIColor, NSString, NSMutableDictionary, UIImage;

@interface UISearchBarBackground : _UIBarBackgroundImageView <_UIBarPositioningInternal> {
    NSMutableDictionary *_customBackgroundImages;
    long long _barPosition;
    unsigned long long _searchBarStyle;
    long long _barStyle;
    long long _barTranslucence;
    BOOL _usesEmbeddedAppearance;
    BOOL _usesContiguousBarBackground;
}

@property (nonatomic) long long barStyle;
@property (nonatomic) unsigned long long searchBarStyle;
@property (retain, nonatomic) UIColor *barTintColor;
@property (nonatomic, getter=isTranslucent) BOOL translucent;
@property (nonatomic) BOOL usesEmbeddedAppearance;
@property (readonly, nonatomic) UIImage *backgroundImage;
@property (readonly, nonatomic) UIImage *backgroundImagePrompt;
@property (nonatomic) BOOL usesContiguousBarBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_setBarPosition:(long long)a0;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_updateBackgroundImageIfPossible;
- (void)_dynamicUserInterfaceTraitDidChange;
- (void)_updateBackgroundImage;
- (id)_createBackgroundImageForBarStyle:(long long)a0 alpha:(double)a1;
- (void)didMoveToWindow;
- (long long)_barPosition;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)_backgroundImageForBarPosition:(long long)a0 barMetrics:(long long)a1;
- (void)_setBackgroundImage:(id)a0 forBarPosition:(long long)a1 barMetrics:(long long)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)_hasCustomBackgroundImage;

@end
