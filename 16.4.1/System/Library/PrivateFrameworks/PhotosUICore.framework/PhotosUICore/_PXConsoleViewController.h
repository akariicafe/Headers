@class UITextView, UIBarButtonItem;

@interface _PXConsoleViewController : UIViewController

@property (readonly, nonatomic) UITextView *_textView;
@property (readonly, nonatomic) UIBarButtonItem *_shareBarButtonItem;
@property (nonatomic) BOOL toolBarWasHidden;

- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear:(BOOL)a0;
- (void)_presentSharingViewController:(id)a0;
- (void)appendOutput:(id)a0;

@end
