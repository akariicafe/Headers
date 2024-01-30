@class UIColor, UIView;

@interface _UIUCBPopoverBarButtonVisualProviderIOS : _UIUCBBarButtonVisualProviderIOS {
    UIView *_selectionBackgroundView;
}

@property (retain, nonatomic) UIColor *selectionBackgroundTintColor;
@property (retain, nonatomic) UIColor *selectionTintColor;

- (long long)_securePasteButtonSite;
- (void)updateButton:(id)a0 forSelectedState:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void)configureButton:(id)a0 withAppearanceDelegate:(id)a1 fromBarItem:(id)a2;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;

@end
