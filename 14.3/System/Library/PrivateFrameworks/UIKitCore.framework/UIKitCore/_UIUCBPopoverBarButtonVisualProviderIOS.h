@class UIColor, UIView;

@interface _UIUCBPopoverBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {
    UIView *_selectionBackgroundView;
}

@property (retain, nonatomic) UIColor *selectionBackgroundTintColor;
@property (retain, nonatomic) UIColor *selectionTintColor;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (BOOL)isEqual:(id)a0;

@end
