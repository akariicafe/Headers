@interface SBHStackConfigurationBackgroundViewController : CCUICustomContentModuleBackgroundViewController

@property (nonatomic) struct CGSize { double width; double height; } apertureSize;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (double)expandedContentModuleHeight;
- (double)expandedContentModuleWidth;
- (void)setFooterButtons:(id)a0;

@end
