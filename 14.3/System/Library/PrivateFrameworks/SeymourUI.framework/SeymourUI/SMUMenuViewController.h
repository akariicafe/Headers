@class NSDictionary;

@interface SMUMenuViewController : CCUIMenuModuleViewController

@property (retain, nonatomic) NSDictionary *menuItemGlyphs;
@property (copy, nonatomic) id /* block */ dismissHandler;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (id)leadingImageForMenuItem:(id)a0;
- (unsigned long long)supportedInterfaceOrientations;

@end
