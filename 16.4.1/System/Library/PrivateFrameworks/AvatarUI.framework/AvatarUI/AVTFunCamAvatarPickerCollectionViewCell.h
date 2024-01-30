@class NSUUID, AVTUIAnimatingImageView, CAShapeLayer, UIButton;

@interface AVTFunCamAvatarPickerCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) AVTUIAnimatingImageView *imageView;
@property (retain, nonatomic) UIButton *accessoryButton;
@property (readonly, nonatomic) CAShapeLayer *selectionLayer;
@property (retain, nonatomic) NSUUID *displaySessionUUID;
@property (copy, nonatomic) id /* block */ imageInsetProvider;
@property (nonatomic) long long imageContentMode;
@property (nonatomic) BOOL selectionVisible;
@property (nonatomic) BOOL roundImageCorners;
@property (nonatomic) BOOL showsTitle;
@property (nonatomic) struct CGSize { double width; double height; } engagedSize;

+ (id)cellIdentifier;
+ (struct CGPath { } *)selectionPathInBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

- (void)setSelected:(BOOL)a0;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void).cxx_destruct;
- (void)setImageZoomFactor:(double)a0;
- (void)updateSelectionLayer;
- (void)updateWithImage:(id)a0 animated:(BOOL)a1;
- (void)updateWithTintColor:(id)a0;

@end
