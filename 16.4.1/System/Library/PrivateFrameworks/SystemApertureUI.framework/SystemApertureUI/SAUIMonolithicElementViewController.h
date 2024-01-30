@protocol SAUIMonolithicElementViewProviding;

@interface SAUIMonolithicElementViewController : SAUILayoutSpecifyingElementViewController

@property (readonly, nonatomic) id<SAUIMonolithicElementViewProviding> elementViewProvider;

- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (id)initWithMonolithicElementViewProvider:(id)a0;

@end
