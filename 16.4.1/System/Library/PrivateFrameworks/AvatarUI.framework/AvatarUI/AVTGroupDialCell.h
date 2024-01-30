@class UILabel, NSTimer, NSString;

@interface AVTGroupDialCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) NSTimer *shimmerTimer;
@property (copy, nonatomic) NSString *string;

+ (id)labelFont;
+ (id)cellIdentifier;
+ (id)boldLabelFont;

- (void)setActiveItem:(BOOL)a0 animated:(BOOL)a1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)startShimmering;
- (void)cancelShimmerTimer;
- (void)shimmerOnceWithCompletion:(id /* block */)a0;
- (void)stopShimmeringAnimated:(BOOL)a0;

@end
