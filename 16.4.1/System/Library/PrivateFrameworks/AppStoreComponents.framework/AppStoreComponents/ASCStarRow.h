@class UIImageView, CAReplicatorLayer, UIColor;

@interface ASCStarRow : UIView

@property (nonatomic) double numberOfStarsInRow;
@property (readonly, nonatomic) UIImageView *starImageView;
@property (readonly, nonatomic) double maxNumberOfStars;
@property (readonly, nonatomic) CAReplicatorLayer *starLayer;
@property (readonly, nonatomic) long long starSize;
@property (readonly, nonatomic) UIColor *starColor;

+ (struct CGSize { double x0; double x1; })sizeForStarRowWithSizeOfStar:(long long)a0 andNumberOfStars:(double)a1;
+ (id)starForSize:(long long)a0 withFill:(BOOL)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })frameForCurrentRating:(double)a0 andStarSize:(long long)a1;
- (id)initWithStarSize:(long long)a0 fill:(BOOL)a1 starColor:(id)a2 andMaxNumberOfStars:(double)a3;
- (void)modifyStarLayerRectToHideOuterPaddingUsing:(id)a0;

@end
