@protocol ICMarkupDismissalDelegate;

@interface ICMarkupNavigationController : UINavigationController

@property (weak, nonatomic) id<ICMarkupDismissalDelegate> markupDelegate;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end
