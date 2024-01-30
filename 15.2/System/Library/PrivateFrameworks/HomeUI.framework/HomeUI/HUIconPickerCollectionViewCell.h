@class HUIconButton;
@protocol HFIconDescriptor;

@interface HUIconPickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) HUIconButton *iconButton;
@property (retain, nonatomic) id<HFIconDescriptor> iconDescriptor;

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;

@end
