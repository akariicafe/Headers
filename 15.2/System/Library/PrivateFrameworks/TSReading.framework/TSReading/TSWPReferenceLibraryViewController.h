@protocol TSWPReferenceLibraryViewControllerDelegate;

@interface TSWPReferenceLibraryViewController : UIReferenceLibraryViewController

@property (nonatomic) id<TSWPReferenceLibraryViewControllerDelegate> delegate;

- (void)viewDidDisappear:(BOOL)a0;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)shouldAutorotate;

@end
