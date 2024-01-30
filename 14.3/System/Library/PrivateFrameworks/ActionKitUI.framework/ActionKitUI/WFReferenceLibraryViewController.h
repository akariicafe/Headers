@protocol WFReferenceLibraryViewControllerDelegate;

@interface WFReferenceLibraryViewController : UIReferenceLibraryViewController

@property (weak, nonatomic) id<WFReferenceLibraryViewControllerDelegate> delegate;

- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)a0;

@end
