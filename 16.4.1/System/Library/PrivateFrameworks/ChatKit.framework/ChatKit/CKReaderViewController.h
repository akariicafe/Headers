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

+ (id)readerScrollPositionCache;
+ (id)readerViewControllerForChatItem:(id)a0;

- (BOOL)shouldAutorotate;
- (void)contentSizeCategoryDidChange:(id)a0;
- (void)setText:(id)a0;
- (id)text;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (unsigned long long)supportedInterfaceOrientations;
- (void).cxx_destruct;
- (void)loadView;
- (void)setVisibleRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })visibleRange;

@end
