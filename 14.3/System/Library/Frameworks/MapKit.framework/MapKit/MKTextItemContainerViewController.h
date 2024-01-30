@class NSArray, UIStackView;
@protocol GEOTextItemContainer;

@interface MKTextItemContainerViewController : UIViewController

@property (readonly, nonatomic) id<GEOTextItemContainer> textItemContainer;
@property (copy, nonatomic) NSArray *textItemViews;
@property (retain, nonatomic) UIStackView *stackView;
@property (nonatomic) double maxWidth;

- (void).cxx_destruct;
- (double)currentMaxWidth;
- (void)setupSubviewsWithMaxWidth:(double)a0;
- (void)viewDidLayoutSubviews;
- (id)initWithTextItemContainer:(id)a0;
- (void)updateUIForTheme:(id)a0;
- (void)infoCardThemeChanged;
- (void)contentSizeCategoryDidChange:(id)a0;
- (BOOL)_canShowWhileLocked;
- (void)viewDidLoad;

@end
