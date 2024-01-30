@class NSString, NSAttributedString, UITextView;

@interface _SBModifierTimelineTextViewController : UIViewController {
    UITextView *_textView;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSAttributedString *attributedText;

- (void)prepareForReuse;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void).cxx_destruct;

@end
