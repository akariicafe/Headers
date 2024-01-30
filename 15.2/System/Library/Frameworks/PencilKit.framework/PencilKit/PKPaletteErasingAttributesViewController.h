@protocol PKPaletteErasingAttributesViewControllerDelegate;

@interface PKPaletteErasingAttributesViewController : PKPaletteAttributeViewController

@property (nonatomic) long long eraserType;
@property (weak, nonatomic) id<PKPaletteErasingAttributesViewControllerDelegate> delegate;

+ (double)_preferredContentSizeWidth;

- (struct CGSize { double x0; double x1; })preferredContentSize;
- (BOOL)_canShowWhileLocked;
- (void)loadView;
- (void).cxx_destruct;
- (void)_segmentedControlDidChangeValue:(id)a0;

@end
