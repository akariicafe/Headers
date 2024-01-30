@class UIColor, UIControl, CCUILabeledRoundButton, NSString, UIImage, CCUICAPackageDescription;

@interface CCUILabeledRoundButtonViewController : UIViewController

@property (retain, nonatomic) UIColor *highlightColor;
@property (retain, nonatomic) UIColor *highlightTintColor;
@property (nonatomic) BOOL useLightStyle;
@property (retain, nonatomic) CCUILabeledRoundButton *buttonContainer;
@property (retain, nonatomic) UIControl *button;
@property (retain, nonatomic) CCUICAPackageDescription *glyphPackageDescription;
@property (copy, nonatomic) NSString *glyphState;
@property (retain, nonatomic) UIImage *glyphImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) BOOL labelsVisible;
@property (nonatomic) BOOL toggleStateOnTap;
@property (nonatomic) BOOL useAlternateBackground;
@property (nonatomic) NSString *contentSizeCategoryThreshold;
@property (nonatomic, getter=isDynamicLayoutEnabled) BOOL dynamicLayoutEnabled;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic, getter=isInoperative) BOOL inoperative;

- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1 useLightStyle:(BOOL)a2;
- (void)buttonTapped:(id)a0;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1 highlightTintColor:(id)a2;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1 highlightTintColor:(id)a2 useLightStyle:(BOOL)a3;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1;
- (id)initWithGlyphImage:(id)a0 highlightColor:(id)a1 useLightStyle:(BOOL)a2;
- (id)initWithGlyphPackageDescription:(id)a0 highlightColor:(id)a1;
- (id)requiredVisualStyleCategories;
- (BOOL)_canShowWhileLocked;
- (void)setVisualStylingProvider:(id)a0 forCategory:(long long)a1;
- (void)setTitle:(id)a0;
- (void).cxx_destruct;
- (void)loadView;

@end
