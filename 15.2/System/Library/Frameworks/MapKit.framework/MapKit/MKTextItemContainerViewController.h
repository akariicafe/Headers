@class NSArray, UIStackView;
@protocol GEOTextItemContainer;

@interface MKTextItemContainerViewController : UIViewController

@property (readonly, nonatomic) id<GEOTextItemContainer> textItemContainer;
@property (copy, nonatomic) NSArray *textItemViews;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) double maxWidth;

- (double)currentMaxWidth;
- (void)setupSubviewsWithMaxWidth:(double)a0;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateUIForTheme:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)initWithTextItemContainer:(id)a0;
- (void)infoCardThemeChanged;

@end
