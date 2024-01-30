@class UIImageView;

@interface CKEditableSearchResultCell : UICollectionViewCell

@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (retain, nonatomic) UIImageView *checkmarkView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *selectionOverlay;

- (void)setSelected:(BOOL)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
