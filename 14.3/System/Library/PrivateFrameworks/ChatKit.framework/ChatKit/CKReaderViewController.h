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

- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleRange;
- (id)init;
- (void).cxx_destruct;
- (id)text;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)loadView;
- (BOOL)shouldAutorotate;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)setVisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setText:(id)a0;

@end
