@class _UIUCBKBSelectionBackground;

@interface _UIUCBGroupBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {
    _UIUCBKBSelectionBackground *_selectionBackgroundView;
}

@property (nonatomic) BOOL lightKeyboard;

+ (id)darkKeyboardProvider;
+ (id)lightKeyboardProvider;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)shouldLift;
- (void)updateButton:(id)a0 toUseButtonShapes:(BOOL)a1;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (BOOL)isEqual:(id)a0;

@end
