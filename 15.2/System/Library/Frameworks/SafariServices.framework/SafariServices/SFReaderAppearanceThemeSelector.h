@class UIButton, UIStackView;

@interface SFReaderAppearanceThemeSelector : UIView {
    UIStackView *_stackView;
    UIButton *_whiteButton;
    UIButton *_sepiaButton;
    UIButton *_grayButton;
    UIButton *_nightButton;
}

@property (class, readonly, nonatomic) double requiredHeight;

@property (nonatomic) long long selectedTheme;
@property (copy, nonatomic) id /* block */ selectedThemeChangedBlock;

+ (id)themeSelectorWithBlock:(id /* block */)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)_createThemeButtons;
- (void)_updateSelectedTheme;
- (id)_buttonForTheme:(long long)a0;
- (id)_imageForTheme:(long long)a0 selected:(BOOL)a1;
- (void)_themeButtonAction:(id)a0;
- (id)_themeButtonImageWithFillColor:(id)a0 strokeColor:(id)a1 selected:(BOOL)a2;
- (long long)_themeForButton:(id)a0;
- (void)_changeSelectionForTheme:(long long)a0 selected:(BOOL)a1;

@end
