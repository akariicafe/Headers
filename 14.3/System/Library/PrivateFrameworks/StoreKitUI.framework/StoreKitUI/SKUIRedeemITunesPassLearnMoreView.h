@class UIControl, NSString, UIImageView, UIImage, UILabel, UIButton;

@interface SKUIRedeemITunesPassLearnMoreView : UIView {
    UIButton *_button;
    UILabel *_explanationLabel;
    UIImageView *_headerImageView;
}

@property (readonly, nonatomic) UIControl *button;
@property (copy, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) NSString *explanationString;
@property (retain, nonatomic) UIImage *headerImage;

- (void).cxx_destruct;
- (void)setBackgroundColor:(id)a0;
- (void)layoutSubviews;

@end
