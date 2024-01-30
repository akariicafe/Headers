@class UIColor, _UIUCBKBSelectionBackground;
@protocol _UIButtonBarAppearanceDelegate;

@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {
    _UIUCBKBSelectionBackground *_selectionBackgroundView;
    id<_UIButtonBarAppearanceDelegate> _appearanceDelegate;
    UIColor *_tintColor;
}

@property (nonatomic) BOOL lightKeyboard;

+ (id)darkKeyboardProvider;
+ (id)lightKeyboardProvider;

- (long long)_securePasteButtonSite;
- (id)tintColor;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (BOOL)shouldLift;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setTintColor:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (id)imageSymbolConfiguration;
- (struct CGPoint { double x0; double x1; })menuAnchorPoint;
- (void)updateButton:(id)a0 toUseButtonShapes:(BOOL)a1;
- (void).cxx_destruct;

@end
