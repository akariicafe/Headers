@class NSString, UIImageView, VEKSong, UILabel, NSLayoutConstraint;

@interface MiroMusicMenuCell : UITableViewCell

@property (retain, nonatomic) UILabel *upperDetailsLabel;
@property (retain, nonatomic) UILabel *lowerDetailsLabel;
@property (retain, nonatomic) VEKSong *song;
@property (retain, nonatomic) UIImageView *artworkView;
@property (retain, nonatomic) NSString *detailText;
@property (retain, nonatomic) NSString *secondaryDetailText;
@property (retain, nonatomic) UIImageView *checkmark;
@property (retain, nonatomic) NSLayoutConstraint *artworkLeadingConstraint;

- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)awakeFromNib;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)_updateFonts;

@end
