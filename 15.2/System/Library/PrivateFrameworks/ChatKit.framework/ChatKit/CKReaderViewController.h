@class NSString, UITextView, NSAttributedString;
@protocol CKReaderViewControllerDelegate;

@interface CKReaderViewController : UIViewController <UIWebViewDelegate>

@property (retain, nonatomic) UITextView *textView;
@property (weak, nonatomic) id<CKReaderViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *messageGUID;
@property (copy, nonatomic) NSAttributedString *text;
@property (nonatomic) struct _NSRange { unsigned long long x0; unsigned long long x1; } visibleRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)readerViewControllerForChatItem:(id)a0;
+ (id)readerScrollPositionCache;

- (void)setVisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (void)viewWillDisappear:(BOOL)a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleRange;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)loadView;
- (void)setText:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (id)init;
- (id)text;
- (void)dealloc;
- (BOOL)shouldAutorotate;

@end
