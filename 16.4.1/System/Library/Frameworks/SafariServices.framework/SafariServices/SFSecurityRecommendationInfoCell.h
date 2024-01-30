@class UIView, NSString, NSArray, UIImage, UIImageView, UIButton, WBSSavedAccount, NSLayoutConstraint, UILabel;
@protocol SFSecurityRecommendationInfoCellDelegate;

@interface SFSecurityRecommendationInfoCell : UITableViewCell <SFAccountTableViewCell> {
    UIImageView *_iconView;
    UIImageView *_completedUpgradeCheckmarkView;
    UILabel *_monogramLabel;
    UIView *_monogramBackgroundView;
    unsigned long long _configuration;
    NSArray *_completedUpgradeCheckmarkViewConstraints;
    NSLayoutConstraint *_standardTitleTrailingConstraint;
    UIButton *_hideButton;
    NSArray *_hideButtonConstraints;
}

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) WBSSavedAccount *savedAccount;
@property (weak, nonatomic) id<SFSecurityRecommendationInfoCellDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_createHideButton;
- (void)_hideButtonPressed:(id)a0;
- (double)_iconWidth;
- (id)initWithConfiguration:(unsigned long long)a0 reuseIdentifier:(id)a1;
- (void)setSavedAccount:(id)a0;
- (void)setShowsHideButton:(BOOL)a0;
- (void)setShowsUpgradeCompletionCheckmark:(BOOL)a0;
- (void)showCheckmarkForDetailView;
- (void)showPlaceholderImageForDomain:(id)a0 backgroundColor:(id)a1;

@end
