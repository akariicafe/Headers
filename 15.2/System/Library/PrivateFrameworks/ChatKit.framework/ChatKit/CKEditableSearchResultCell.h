@class UIImageView;

@interface CKEditableSearchResultCell : UICollectionViewCell

@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (retain, nonatomic) UIImageView *checkmarkView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *selectionOverlay;

- (void)layoutSubviews;
- (BOOL)__im_ff_systemImageAdoptionEnabled;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
