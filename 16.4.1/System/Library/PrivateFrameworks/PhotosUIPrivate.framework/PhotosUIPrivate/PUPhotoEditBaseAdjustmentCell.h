@class PUPhotoEditAdjustmentControl, NSString;

@interface PUPhotoEditBaseAdjustmentCell : UICollectionViewCell <UIPointerInteractionDelegate>

@property (retain, nonatomic) PUPhotoEditAdjustmentControl *containerButton;
@property (nonatomic) double value;
@property (nonatomic) double defaultValue;
@property (nonatomic) double identityValue;
@property (nonatomic) double minValue;
@property (nonatomic) double maxValue;
@property (retain, nonatomic) NSString *imageName;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) BOOL isUserModifying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)pointerInteraction:(id)a0 styleForRegion:(id)a1;
- (void)setSelected:(BOOL)a0;
- (id)initWithCoder:(id)a0;
- (id)focusEffect;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)pointerInteraction:(id)a0 regionForRequest:(id)a1 defaultRegion:(id)a2;
- (void)resetToDefault;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)_setupContainerButton;

@end
