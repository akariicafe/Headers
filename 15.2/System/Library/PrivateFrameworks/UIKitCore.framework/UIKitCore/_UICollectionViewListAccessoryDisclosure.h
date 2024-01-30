@class UIImage, UIColor, UIImageView;
@protocol UITableConstants;

@interface _UICollectionViewListAccessoryDisclosure : UIControl {
    UIImageView *_imageView;
}

@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) id<UITableConstants> constants;
@property (retain, nonatomic) UIColor *accessoryTintColor;
@property (nonatomic) BOOL rotated;
@property (nonatomic) double rotationAngle;

- (id)viewForFirstBaselineLayout;
- (void)layoutSubviews;
- (id)viewForLastBaselineLayout;
- (void)addActionHandler:(id /* block */)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (unsigned long long)_controlEventsForActionTriggered;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateRotation;
- (double)_enforcedWidthForWidth:(double)a0;
- (void).cxx_destruct;
- (id)initWithConstants:(id)a0;
- (struct CGSize { double x0; double x1; })_minimumSizeForHitTesting;

@end
