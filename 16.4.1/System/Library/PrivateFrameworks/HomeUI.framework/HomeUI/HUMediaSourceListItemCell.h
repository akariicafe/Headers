@class UIImageView, UIActivityIndicatorView;

@interface HUMediaSourceListItemCell : HUTitleDescriptionCell

@property (retain, nonatomic) UIImageView *serviceIconView;
@property (retain, nonatomic) UIActivityIndicatorView *spinner;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)updateUIWithAnimation:(BOOL)a0;

@end
