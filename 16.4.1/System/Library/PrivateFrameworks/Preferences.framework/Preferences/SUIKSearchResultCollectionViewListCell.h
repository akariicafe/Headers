@class CSSearchableItem;

@interface SUIKSearchResultCollectionViewListCell : UICollectionViewListCell

@property (retain, nonatomic) CSSearchableItem *searchableItem;

+ (id)reuseIdentifier;

- (void)prepareForReuse;
- (void)updateConfigurationUsingState:(id)a0;
- (void).cxx_destruct;
- (void)configureWithSearchableItem:(id)a0;

@end
