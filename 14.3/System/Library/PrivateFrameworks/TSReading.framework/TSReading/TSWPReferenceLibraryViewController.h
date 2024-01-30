@protocol TSWPReferenceLibraryViewControllerDelegate;

@interface TSWPReferenceLibraryViewController : UIReferenceLibraryViewController

@property (nonatomic) id<TSWPReferenceLibraryViewControllerDelegate> delegate;

- (BOOL)shouldAutorotate;
- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;

@end
