@class UILabel, UIImageView, NSArray;

@interface PUPhotoStreamAlbumLargeTextTableViewCell : PUPhotoStreamAlbumTableViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIImageView *albumImageView;
@property (retain, nonatomic) NSArray *currentConstraints;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (id)text;
- (void)updateConstraints;
- (void)_commonPhotoStreamAlbumLargeTextTableViewCellInit;
- (id)initWithCoder:(id)a0;
- (id)detailText;
- (void)didMoveToWindow;
- (void)setDetailText:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)traitCollectionDidChange:(id)a0;
- (void)setText:(id)a0;

@end
