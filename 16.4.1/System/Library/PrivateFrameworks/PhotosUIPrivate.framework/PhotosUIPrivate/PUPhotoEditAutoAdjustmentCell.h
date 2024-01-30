@class UITapGestureRecognizer;
@protocol PUPhotoEditBaseAdjustmentCellDelegate;

@interface PUPhotoEditAutoAdjustmentCell : PUPhotoEditBaseAdjustmentCell

@property (retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer;
@property (weak, nonatomic) id<PUPhotoEditBaseAdjustmentCellDelegate> delegate;

- (void)setSelected:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setEnabled:(BOOL)a0;
- (void).cxx_destruct;
- (void)setImageName:(id)a0;
- (void)_configureContainerButton;
- (void)handleButton:(id)a0;
- (void)performPrimaryAction;

@end
