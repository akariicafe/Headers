@protocol WFReferenceLibraryViewControllerDelegate;

@interface WFReferenceLibraryViewController : UIReferenceLibraryViewController

@property (weak, nonatomic) id<WFReferenceLibraryViewControllerDelegate> delegate;

- (void)viewWillDisappear:(BOOL)a0;
- (void).cxx_destruct;

@end
