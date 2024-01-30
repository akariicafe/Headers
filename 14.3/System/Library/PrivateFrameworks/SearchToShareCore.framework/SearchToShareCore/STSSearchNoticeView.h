@class UIColor, NSString, UILabel, NSMutableArray, UIButton;

@interface STSSearchNoticeView : UIView {
    UILabel *_textLabel;
    UIButton *_continueButton;
    NSMutableArray *_constraints;
}

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) UIColor *textColor;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic, getter=isContentCentered) BOOL contentCentered;
@property (copy, nonatomic) id /* block */ continueButtonAction;

- (id)init;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)_continuePressed:(id)a0;

@end
