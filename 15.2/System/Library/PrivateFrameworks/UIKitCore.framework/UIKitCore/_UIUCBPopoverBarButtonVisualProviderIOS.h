@class UIColor, UIView;

@interface _UIUCBPopoverBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {
    UIView *_selectionBackgroundView;
}

@property (retain, nonatomic) UIColor *selectionBackgroundTintColor;
@property (retain, nonatomic) UIColor *selectionTintColor;

- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (long long)_securePasteButtonSite;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;

@end
