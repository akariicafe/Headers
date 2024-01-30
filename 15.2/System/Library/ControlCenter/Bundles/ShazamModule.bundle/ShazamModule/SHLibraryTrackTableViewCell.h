@class NSString, UIImageView, UIVisualEffectView, UILabel;

@interface SHLibraryTrackTableViewCell : UITableViewCell

@property (retain, nonatomic) UIImageView *artworkImageView;
@property (retain, nonatomic) UILabel *attributionLabel;
@property (retain, nonatomic) UIVisualEffectView *attributionBackgroundView;
@property (retain, nonatomic) UIVisualEffectView *highlightedBackgroundView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (copy, nonatomic) NSString *dataID;

- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setAttributionText:(id)a0;
- (void)setArtworkURL:(id)a0 forDataID:(id)a1;

@end
