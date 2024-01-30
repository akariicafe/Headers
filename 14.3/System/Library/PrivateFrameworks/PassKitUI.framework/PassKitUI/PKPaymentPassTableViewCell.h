@class UIColor, PKPeerPaymentAccount, PKPaymentPass, UILabel, UIView;

@interface PKPaymentPassTableViewCell : PKTableViewCell {
    UILabel *_mainLabel;
    UILabel *_subTextLabel;
    UIView *_cardSnapshotView;
}

@property (retain, nonatomic) PKPaymentPass *pass;
@property (retain, nonatomic) PKPeerPaymentAccount *peerPaymentAccount;
@property (retain, nonatomic) UIColor *mainLabelColor;
@property (retain, nonatomic) UIColor *subTextLabelColor;
@property (retain, nonatomic) UIColor *disabledMainLabelColor;
@property (retain, nonatomic) UIColor *disabledSubTextLabelColor;

+ (id)titleFont;
+ (double)heightForCellWithMinimum:(double)a0 hasSubTitle:(BOOL)a1;
+ (id)subTitleFont;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)pk_applyAppearance:(id)a0;
- (void)layoutSubviews;
- (void)setEnabled:(BOOL)a0;
- (void)_updateLabelText;
- (void)_updateLabelTextColors;

@end
