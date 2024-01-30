@class SKUIReviewMetadata, NSString, SKUIWriteAReviewTemplateViewElement, SUPlaceholderViewController, UIAlertAction, SKUIComposeReviewFormViewController;
@protocol SKUIComposeReviewDelegate;

@interface SKUIComposeReviewViewController : SUNavigationController <SKUIComposeReviewFormDelegate, UITextFieldDelegate> {
    SKUIComposeReviewFormViewController *_formViewController;
    SUPlaceholderViewController *_placeholderViewController;
    NSString *_nickname;
    BOOL _nicknameShouldResetOnError;
    UIAlertAction *_nicknameOKAction;
}

@property (nonatomic, getter=isEdit) BOOL edit;
@property (weak, nonatomic) id<SKUIComposeReviewDelegate> delegate;
@property (retain, nonatomic) SKUIWriteAReviewTemplateViewElement *templateViewElement;
@property (readonly, copy, nonatomic) SKUIReviewMetadata *editedReviewMetadata;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)_preventsAppearanceProxyCustomization;

- (long long)preferredStatusBarStyle;
- (void)setRating:(float)a0;
- (void)_setNickname:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)_cancelAction:(id)a0;
- (void)dealloc;
- (BOOL)textField:(id)a0 shouldChangeCharactersInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementString:(id)a2;
- (void)_loadReviewWithURL:(id)a0 completionBlock:(id /* block */)a1;
- (void)_setNicknameShouldResetOnError:(BOOL)a0;
- (void)_sendDidSubmit;
- (void)_sendDidCancel;
- (void)_promptForNickname;
- (void)_attemptReviewSubmission;
- (void)submitReview;
- (void)_finishLoadWithOutput:(id)a0 error:(id)a1;
- (void)composeReviewFormDidCancel:(id)a0;
- (void)composeReviewFormDidSubmit:(id)a0;
- (void)loadReviewWithURL:(id)a0 completionBlock:(id /* block */)a1;

@end
