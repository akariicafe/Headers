@interface HKScalarGraphViewController : HKGraphViewController

@property (readonly, nonatomic) double minimumHeight;

- (void)viewDidLoad;
- (void)loadView;
- (id)_buildGraphViewWithLabelDimension:(id)a0 labelEndings:(long long)a1;
- (id)initWithMinimumHeight:(double)a0 labelDimension:(id)a1 labelEndings:(long long)a2;
- (void)_setupGraphViewSelectionStyle;
- (void)_pinView:(id)a0 toParentView:(id)a1;
- (id)initWithMinimumHeight:(double)a0;

@end
