@class MFRoundedCornersStackView, MFComposeColorPickerController, UIStackView, MFComposeFontSelectorButton, MFComposeStyleSelectorButton, MFComposeTextColorButton, NSString;
@protocol MFComposeStyleSelectorViewControllerDelegate;

@interface MFComposeStyleSelectorViewController : UIViewController <MFComposeColorPickerControllerDelegate, UIFontPickerViewControllerDelegate, MFPreferredHeightProviding>

@property (retain, nonatomic) UIStackView *containerStackView;
@property (retain, nonatomic) MFComposeColorPickerController *colorPicker;
@property (retain, nonatomic) UIStackView *fontTextAttributeStackView;
@property (retain, nonatomic) UIStackView *fontAttributeStackView;
@property (retain, nonatomic) MFRoundedCornersStackView *textAttributeStackView;
@property (retain, nonatomic) UIStackView *quoteIndentListJustifyStackView;
@property (retain, nonatomic) UIStackView *listJustifyStackView;
@property (retain, nonatomic) MFRoundedCornersStackView *listStackView;
@property (retain, nonatomic) MFRoundedCornersStackView *indentStackView;
@property (retain, nonatomic) UIStackView *quoteIndentStackView;
@property (retain, nonatomic) MFRoundedCornersStackView *justifyStackView;
@property (retain, nonatomic) MFRoundedCornersStackView *quoteLevelStackView;
@property (retain, nonatomic) MFComposeFontSelectorButton *fontSelectorButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *decreaseFontSizeButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *increaseFontSizeButton;
@property (retain, nonatomic) MFComposeTextColorButton *textColorButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *boldButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *italicsButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *underlineButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *strikethroughButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *bulletListButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *numberedListButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *justifyLeftButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *justifyCenterButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *justifyRightButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *increaseQuoteButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *decreaseQuoteButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *indentLeftButton;
@property (retain, nonatomic) MFComposeStyleSelectorButton *indentRightButton;
@property (nonatomic) long long currentFontSize;
@property (weak, nonatomic) id<MFComposeStyleSelectorViewControllerDelegate> styleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void)viewDidLoad;
- (struct CGSize { double x0; double x1; })preferredContentSize;
- (void)_setupButtons;
- (void)loadView;
- (void)fontPickerViewControllerDidCancel:(id)a0;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)a0;
- (double)preferredHeightForTraitCollection:(id)a0;
- (void)fontPickerViewControllerDidPickFont:(id)a0;
- (void)colorPickerDidCancel:(id)a0;
- (void)colorPicker:(id)a0 didChangeSelectedColor:(id)a1;
- (id)_roundedEquallyFilledHorizontalStackView;
- (void)pickFontAction:(id)a0;
- (void)_updateFontsButton:(id)a0;
- (void)pickTextColor:(id)a0;
- (void)_setupContainer;
- (void)closeStyleSelector:(id)a0;
- (void)styleSelectorAction:(id)a0;
- (id)_composeStyleSelectorButtonForAttributeType:(long long)a0;
- (void)changeFontSizeAction:(id)a0;
- (void)updateStateUsingFontAttributes:(id)a0;

@end
