@class UITextView, NSString, NSArray, UIScrollView, UILabel, PKAccount;

@interface PKAccountBillPaymentLearnMoreViewController : UIViewController <UITextViewDelegate, UIScrollViewDelegate> {
    PKAccount *_account;
    UIScrollView *_scrollView;
    NSString *_titleText;
    NSString *_subtitleText;
    NSArray *_suggestionDescriptions;
    NSArray *_footnotes;
    NSString *_customerAgreementText;
    NSString *_customerAgreementLinkText;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    NSArray *_suggestionDescriptionLabels;
    NSArray *_footnoteLabels;
    UITextView *_customerAgreementTextView;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAccount:(id)a0;
- (BOOL)textView:(id)a0 shouldInteractWithURL:(id)a1 inRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a2 interaction:(long long)a3;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)_reportEventForPassIfNecessary:(id)a0;
- (id)_customerAgreementAttributedString;
- (void)doneButtonTapped;

@end
