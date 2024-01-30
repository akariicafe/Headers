@class PUPhotoEditAdjustmentControl, NSString;

@interface PUPhotoEditBaseAdjustmentCell : UICollectionViewCell

@property (retain, nonatomic) PUPhotoEditAdjustmentControl *containerButton;
@property (nonatomic) double value;
@property (nonatomic) double defaultValue;
@property (nonatomic) double identityValue;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (retain, nonatomic) NSString *imageName;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL isUserModifying;

- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (void)_setupContainerButton;
- (void)layoutSubviews;
- (void)resetToDefault;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
