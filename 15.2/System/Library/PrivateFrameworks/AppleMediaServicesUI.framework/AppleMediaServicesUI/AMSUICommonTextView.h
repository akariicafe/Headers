@interface AMSUICommonTextView : UITextView

@property (nonatomic) BOOL centerText;

- (void)layoutSubviews;
- (void)_centerTextIfNeeded;

@end
