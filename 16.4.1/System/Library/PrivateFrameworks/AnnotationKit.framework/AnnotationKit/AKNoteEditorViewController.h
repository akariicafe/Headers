@class UITextView, AKPopupAnnotation;
@protocol AKNoteEditorViewControllerDelegate;

@interface AKNoteEditorViewController : UIViewController

@property (retain, nonatomic) UITextView *textView;
@property (retain) AKPopupAnnotation *annotation;
@property (weak, nonatomic) id<AKNoteEditorViewControllerDelegate> delegate;

- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;

@end
