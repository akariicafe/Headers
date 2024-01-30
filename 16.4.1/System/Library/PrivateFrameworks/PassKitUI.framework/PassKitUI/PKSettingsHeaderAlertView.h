@class NSString, UITextView;

@interface PKSettingsHeaderAlertView : UIView <PSHeaderFooterView> {
    UITextView *_textView;
}

@property (retain, nonatomic) NSString *headerText;
@property (retain, nonatomic) NSString *descriptionText;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithSpecifier:(id)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (double)preferredHeightForWidth:(double)a0;

@end
