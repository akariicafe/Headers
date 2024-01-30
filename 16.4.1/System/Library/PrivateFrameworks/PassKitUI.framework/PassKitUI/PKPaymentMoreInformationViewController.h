@class UITextView, NSString, PKBusinessChatController, UIScrollView, UILabel, UIButton;
@protocol PKPaymentMoreInformationViewControllerDelegate;

@interface PKPaymentMoreInformationViewController : UIViewController <UITextViewDelegate> {
    UIScrollView *_scrollView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UITextView *_detailTextView;
    UIButton *_businessChatButton;
    PKBusinessChatController *_businessChatController;
    long long _context;
}

@property (weak, nonatomic) id<PKPaymentMoreInformationViewControllerDelegate> delegate;
@property (copy, nonatomic) NSString *detailTitle;
@property (copy, nonatomic) NSString *detailSubtitle;
@property (copy, nonatomic) NSString *detailBody;
@property (copy, nonatomic) NSString *businessChatButtonTitle;
@property (copy, nonatomic) NSString *businessChatIdentifier;
@property (copy, nonatomic) NSString *businessChatIntentName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (id)initWithContext:(long long)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)setupTitleLabel;
- (void)_businessChatButtonTapped;
- (BOOL)_shouldShowBusinessChatButton;
- (void)doneButtonTapped;
- (void)setupBusinessChatButton;
- (void)setupDetailTextView;
- (void)setupSubtitleLabel;
- (void)setupViewAndScrollView;

@end
