@class UILabel, NSLayoutConstraint;

@interface _VideosExtrasMainMenuItemCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSLayoutConstraint *textLabelConstraint;
@property (readonly, nonatomic) UILabel *textLabel;

+ (id)_createLabelInCell:(id)a0;

- (void)safeAreaInsetsDidChange;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)_dynamicTypeChanged;

@end
