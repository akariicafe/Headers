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

- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)resetToDefault;
- (id)focusEffect;
- (void)_setupContainerButton;

@end
