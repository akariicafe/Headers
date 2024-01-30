@class UIImage, UILabel, UIImageView;

@interface PKPaymentSetupTableViewCell : PKTableViewCell {
    UILabel *_betaLabel;
    UIImageView *_cardImageView;
    UIImageView *_iconImageView;
    long long _thumbnailType;
}

@property (readonly, nonatomic) UIImage *thumbnail;
@property (nonatomic) BOOL showBetaBadge;

+ (struct CGSize { double x0; double x1; })defaultImageViewSize;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setThumbnail:(id)a0 type:(long long)a1 animated:(BOOL)a2;

@end
