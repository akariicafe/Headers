@interface SBHStackConfigurationBackgroundViewController : CCUICustomContentModuleBackgroundViewController

@property (nonatomic) struct CGSize { double width; double height; } apertureSize;

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)setFooterButtons:(id)a0;
- (double)expandedContentModuleWidth;
- (double)expandedContentModuleHeight;

@end
