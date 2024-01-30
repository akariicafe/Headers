@class UIView, NSString, NSArray, UIImage, UIImageView, WBSSavedPassword, NSLayoutConstraint, UILabel;

@interface SFSecurityRecommendationInfoCell : UITableViewCell <SFPasswordTableViewCell> {
    UIImageView *_iconView;
    UIImageView *_completedUpgradeCheckmarkView;
    UILabel *_monogramLabel;
    UIView *_monogramBackgroundView;
    unsigned long long _configuration;
    NSArray *_completedUpgradeCheckmarkViewConstraints;
    NSLayoutConstraint *_standardTitleTrailingConstraint;
}

@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) WBSSavedPassword *savedPassword;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)setSavedPassword:(id)a0;
- (double)_iconWidth;
- (void)showPlaceholderImageForDomain:(id)a0 backgroundColor:(id)a1;
- (id)initWithConfiguration:(unsigned long long)a0 reuseIdentifier:(id)a1;
- (void)showCheckmarkForDetailView;
- (void)setShowsUpgradeCompletionCheckmark:(BOOL)a0;

@end
