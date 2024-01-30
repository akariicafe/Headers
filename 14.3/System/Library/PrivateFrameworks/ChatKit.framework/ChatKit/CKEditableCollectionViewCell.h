@class UIImageView;

@interface CKEditableCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *checkmark;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } contentAlignmentRect;
@property (readonly, nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } contentAlignmentInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } marginInsets;
@property (nonatomic, getter=_ck_isEditing, setter=_ck_setEditing:) BOOL _ck_editing;
@property (nonatomic) BOOL hidesCheckmark;

- (void).cxx_destruct;
- (void)_ck_setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)setSelected:(BOOL)a0;
- (id)description;
- (void)layoutSubviews;
- (void)updateCheckmarkImage;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })_horizontalSafeAreaInsets;
- (void)setHighlighted:(BOOL)a0;

@end
