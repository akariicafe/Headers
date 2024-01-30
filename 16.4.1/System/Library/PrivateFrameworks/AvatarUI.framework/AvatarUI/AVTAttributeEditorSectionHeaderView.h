@class UILabel, UIButton, NSString;
@protocol AVTAttributeEditorSectionHeaderViewDelegate, AVTAvatarAttributeEditorSectionSupplementalPicker;

@interface AVTAttributeEditorSectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIButton *accessoryButton;
@property (copy, nonatomic) NSString *displayString;
@property (weak, nonatomic) id<AVTAttributeEditorSectionHeaderViewDelegate> delegate;
@property (retain, nonatomic) id<AVTAvatarAttributeEditorSectionSupplementalPicker> supplementalPicker;

+ (id)reuseIdentifier;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateMenu;
- (void)layoutSubviews;
- (BOOL)isRTL;
- (void)traitCollectionDidChange:(id)a0;
- (id)chevronImage;
- (void).cxx_destruct;
- (void)createAccessoryButtonIfNeeded;
- (void)updateButtonForSelectedSectionItem;

@end
