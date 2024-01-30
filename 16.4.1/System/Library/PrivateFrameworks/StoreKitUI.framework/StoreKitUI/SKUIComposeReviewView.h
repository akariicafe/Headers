@class SKUIReviewMetadata, NSString, SULoadingView, SKUIComposeReviewHeaderView, UIScrollView, SUTextContentView;
@protocol SKUIComposeReviewViewDelegate;

@interface SKUIComposeReviewView : UIView <SKUIComposeReviewHeaderDelegate, UITextContentViewDelegate> {
    long long _currentBodyLength;
    SKUIComposeReviewHeaderView *_headerView;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _keyboardFrame;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _remoteKeyboardFrame;
    unsigned char _loading : 1;
    SULoadingView *_loadingView;
    SKUIReviewMetadata *_review;
    UIScrollView *_scrollView;
    SUTextContentView *_textContentView;
}

@property (readonly, nonatomic) long long composeReviewStyle;
@property (weak, nonatomic) id<SKUIComposeReviewViewDelegate> delegate;
@property (nonatomic, getter=isLoading) BOOL loading;
@property (nonatomic) float rating;
@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)_updateContentSize;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 style:(long long)a1;
- (void)_layoutLoadingView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)_body;
- (void)textContentView:(id)a0 didChangeSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)textContentView:(id)a0 shouldChangeSizeForContentSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)textContentView:(id)a0 shouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 replacementText:(id)a2;
- (BOOL)textContentView:(id)a0 shouldScrollForPendingContentSize:(struct CGSize { double x0; double x1; })a1;
- (void)textContentViewDidChange:(id)a0;
- (void)_showLoadingView;
- (void)_keyboardVisibilityDidChangeNotification:(id)a0;
- (BOOL)_composeReviewTextViewShouldChangeTextInRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a0 replacementText:(id)a1;
- (void)_delayedUpdateReviewLength;
- (BOOL)_isReviewTextOptional;
- (void)_layoutComposeView;
- (void)_remoteKeyboardVisibilityDidChangeNotification:(id)a0;
- (id)_reviewPlaceholder;
- (void)_showComposeView;
- (void)composeHeaderViewValidityDidChange:(id)a0;
- (void)composeHeaderViewValuesDidChange:(id)a0;
- (id)copyReview;
- (void)setReview:(id)a0;

@end
