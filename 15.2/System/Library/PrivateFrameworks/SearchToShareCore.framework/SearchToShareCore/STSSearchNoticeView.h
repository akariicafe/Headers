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

- (void)layoutSubviews;
- (void).cxx_destruct;
- (id)init;
- (void)_continuePressed:(id)a0;

@end
