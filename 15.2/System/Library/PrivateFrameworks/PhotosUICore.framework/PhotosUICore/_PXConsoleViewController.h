@class UITextView, UIBarButtonItem;

@interface _PXConsoleViewController : UIViewController

@property (readonly, nonatomic) UITextView *_textView;
@property (readonly, nonatomic) UIBarButtonItem *_shareBarButtonItem;
@property (nonatomic) BOOL toolBarWasHidden;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (void).cxx_destruct;
- (id)init;
- (void)appendOutput:(id)a0;
- (void)_presentSharingViewController:(id)a0;

@end
