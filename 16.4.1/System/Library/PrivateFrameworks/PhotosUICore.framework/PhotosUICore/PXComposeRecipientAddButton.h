@interface PXComposeRecipientAddButton : UIButton

@property (nonatomic) struct CGSize { double width; double height; } imageSizeToAlignWith;
@property (nonatomic) double inset;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)_commmonPXComposeRecipientAddButtonInitialization;

@end
