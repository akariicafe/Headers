@class PKSuperscriptedCurrencyAmountLabel, PKActivityEventPeerPaymentTransaction, NSString, UIImageView, UILabel, CNAvatarViewController;

@interface PKPeerPaymentActivitySummaryCell : PKTableViewCell {
    UILabel *_titleView;
    UILabel *_subtitleView;
    UILabel *_timeView;
    PKSuperscriptedCurrencyAmountLabel *_amountLabel;
    UIImageView *_unreadIndicatorView;
}

@property (retain, nonatomic) PKActivityEventPeerPaymentTransaction *event;
@property (retain, nonatomic) CNAvatarViewController *avatarViewController;
@property (retain, nonatomic) NSString *contactName;

+ (double)height;
+ (id)unreadIndicatorImage;
+ (double)separatorLeadingInset;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)dealloc;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)_updateViews;

@end
