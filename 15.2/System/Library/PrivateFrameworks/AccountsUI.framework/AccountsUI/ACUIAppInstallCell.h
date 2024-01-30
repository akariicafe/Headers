@class UILabel, UIImageView, SKUIItemOfferButton;

@interface ACUIAppInstallCell : PSTableCell {
    UILabel *_nameLabel;
    UILabel *_publisherLabel;
    UIImageView *_iconView;
    SKUIItemOfferButton *_installButton;
}

@property (nonatomic) int installState;

+ (id)specifierForAppWithDescription:(id)a0 target:(id)a1 action:(SEL)a2;

- (void)layoutSubviews;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1 specifier:(id)a2;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (id)_createLabelForAppName:(id)a0;
- (id)_createLabelForPublisher:(id)a0;
- (id)_createInstallButton;
- (void)_updateSubviewsWithInstallState:(int)a0;
- (void)_updateInstallButtonWithState:(int)a0;

@end
