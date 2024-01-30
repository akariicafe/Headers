@protocol TabGroupAlertControllerDelegate;

@interface TabGroupAlertController : UIAlertController

@property (weak, nonatomic) id<TabGroupAlertControllerDelegate> delegate;
@property (nonatomic) long long role;

- (void)dismissViewControllerAnimated:(BOOL)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
