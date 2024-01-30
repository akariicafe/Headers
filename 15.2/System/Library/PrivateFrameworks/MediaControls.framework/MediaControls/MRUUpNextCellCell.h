@class UIImageView, NSString, MPArtworkCatalog;

@interface MRUUpNextCellCell : UITableViewCell

@property (retain, nonatomic) UIImageView *artworkView;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (retain, nonatomic) MPArtworkCatalog *artworkCatalog;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
