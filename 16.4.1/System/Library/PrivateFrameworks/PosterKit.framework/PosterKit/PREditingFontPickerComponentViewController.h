@class UIFont, NSArray, PREditingPickerCellView, NSLayoutConstraint, NSLocale;
@protocol PREditingFontPickerComponentViewControllerDelegate;

@interface PREditingFontPickerComponentViewController : UIViewController

@property (class, readonly, copy, nonatomic) NSArray *defaultFonts;

@property (retain, nonatomic) UIFont *selectedFont;
@property (retain, nonatomic) PREditingPickerCellView *selectedCellView;
@property (copy, nonatomic) NSArray *cellViews;
@property (nonatomic) double largestItemHeight;
@property (nonatomic, getter=isUsingSmallerSizing) BOOL usingSmallerSizing;
@property (nonatomic) double configuredViewWidth;
@property (nonatomic) double fontSize;
@property (copy, nonatomic) NSArray *widthCellConstraints;
@property (copy, nonatomic) NSArray *heightCellConstraints;
@property (retain, nonatomic) NSLayoutConstraint *stackViewLeadingConstraint;
@property (retain, nonatomic) NSLayoutConstraint *stackViewTrailingConstraint;
@property (readonly, copy, nonatomic) NSArray *fonts;
@property (retain, nonatomic) NSLocale *locale;
@property (weak, nonatomic) id<PREditingFontPickerComponentViewControllerDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (double)estimatedHeight;
- (id)baseContentString;
- (id)contentStringForFont:(id)a0;
- (void)didSelectFont:(id)a0;
- (id)initWithFonts:(id)a0 selectedFont:(id)a1;
- (void)updateLayoutForCurrentSize;

@end
