@class UIImageView, UILabel;

@interface CKDetonatedAttachmentView : UIView

@property (readonly, nonatomic) UIImageView *iconImageView;
@property (readonly, nonatomic) UILabel *titleLabel;

+ (id)attachmentIcon;

- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
