@class UIView, NSArray, UIImage, SKUIGiftCharity, UIImageView, SKUIGiftAmount, UILabel, UIScrollView;

@interface SKUIDonationAmountView : UIView {
    NSArray *_amountButtons;
    UILabel *_amountDisclaimerLabel;
    UILabel *_descriptionLabel;
    UILabel *_legalTextLabel;
    UILabel *_legalText2Label;
    UIImageView *_logoImageView;
    long long _selectedAmountIndex;
    UIView *_separatorView;
    UIScrollView *_scrollView;
}

@property (readonly, nonatomic) SKUIGiftCharity *charity;
@property (retain, nonatomic) UIImage *logoImage;
@property (readonly, nonatomic) SKUIGiftAmount *selectedAmount;

- (void).cxx_destruct;
- (void)dealloc;
- (void)layoutSubviews;
- (id)initWithCharity:(id)a0;
- (void)_amountButtonDown:(id)a0;
- (void)_amountButtonUpInside:(id)a0;
- (void)_amountButtonUpOutside:(id)a0;

@end
