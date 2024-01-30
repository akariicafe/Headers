@protocol AMSUICommonTextViewDelegate;

@interface AMSUICommonTextView : UITextView

@property (weak, nonatomic) id<AMSUICommonTextViewDelegate> ams_delegate;
@property (nonatomic) BOOL centerText;

- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)a0;
- (void).cxx_destruct;
- (void)_centerTextIfNeeded;

@end
