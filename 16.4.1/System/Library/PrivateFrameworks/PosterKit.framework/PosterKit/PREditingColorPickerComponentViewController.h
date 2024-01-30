@class UIColor, UIStackView, PREditingColorItemsViewController, UIScrollView, PREditingColorSlider, PREditorColorPickerConfiguration, PREditingColorVariationStore;
@protocol PREditingColorPickerComponentViewControllerDelegate;

@interface PREditingColorPickerComponentViewController : UIViewController <PREditingColorItemsViewControllerDelegate>

@property (retain, nonatomic) PREditorColorPickerConfiguration *configuration;
@property (retain, nonatomic) PREditingColorVariationStore *variationStore;
@property (nonatomic) BOOL forFontPicker;
@property (nonatomic) BOOL showsHeader;
@property (retain, nonatomic) UIColor *selectedColor;
@property (retain, nonatomic) UIStackView *verticalStack;
@property (retain, nonatomic) PREditingColorItemsViewController *itemsViewController;
@property (retain, nonatomic) PREditingColorSlider *sliderView;
@property (retain, nonatomic) UIScrollView *colorsScrollView;
@property (weak, nonatomic) id<PREditingColorPickerComponentViewControllerDelegate> delegate;
@property (nonatomic) double contentsLuminance;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (double)estimatedHeight;
- (void)updateForColorWellSelectedItem:(id)a0;
- (void)loadItemsViewControllerIfNeeded;
- (void)colorItemsViewController:(id)a0 didSelectColorItem:(id)a1;
- (void)colorItemsViewControllerDidUpdateEstimatedSize:(id)a0;
- (void)colorSliderDidUpdateColor:(id)a0;
- (void)didSelectColorItem:(id)a0;
- (id)initWithConfiguration:(id)a0 variationStore:(id)a1;
- (void)updateSliderVisibility:(BOOL)a0;

@end
