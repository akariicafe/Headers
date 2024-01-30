@class UILabel, CALayer, UIButton;
@protocol AVTAvatarAttributeEditorMulticolorPickerCellDelegate, AVTAvatarAttributeEditorSectionItem;

@interface AVTAvatarAttributeEditorMulticolorPickerCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) CALayer *colorView;
@property (retain, nonatomic) UIButton *clearButton;
@property (retain, nonatomic) id<AVTAvatarAttributeEditorSectionItem> item;
@property (weak, nonatomic) id<AVTAvatarAttributeEditorMulticolorPickerCellDelegate> delegate;

+ (id)cellIdentifier;
+ (id)labelFont;
+ (double)estimatedWidthForLabelSize:(struct CGSize { double x0; double x1; })a0 isRemovable:(BOOL)a1 isSelected:(BOOL)a2;
+ (double)estimatedTitleSpaceForWidth:(double)a0 isRemovable:(BOOL)a1 isSelected:(BOOL)a2;

- (BOOL)isRTL;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateColor;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (BOOL)isRemovable;
- (void)traitCollectionDidChange:(id)a0;
- (void)didTapClearButton:(id)a0;
- (void)layoutForRTL;
- (void)layoutForLTR;
- (void)applyAppearanceForSelected:(BOOL)a0;
- (BOOL)isShowingRemoveButton;
- (void)applySelectedAppearanceForStyle:(long long)a0;
- (void)applyDefaultAppearanceForStyle:(long long)a0;
- (void)updateColorViewBorder;
- (void)showDropShadow;
- (BOOL)shouldShowColorBorder;

@end
