@protocol WFAccountLoginViewControllerDelegate;

@interface WFAccountLoginViewController : UIViewController

@property (weak, nonatomic) id<WFAccountLoginViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)accessibilityPerformEscape;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithAccountClass:(Class)a0;

@end
