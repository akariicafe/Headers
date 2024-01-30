@class UIImageView;

@interface HKFavoritesTableViewCell : UITableViewCell {
    UIImageView *_star;
    UIImageView *_filledStar;
}

@property (nonatomic, getter=isFavorited) BOOL favorited;

+ (id)reuseIdentifier;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;

@end
