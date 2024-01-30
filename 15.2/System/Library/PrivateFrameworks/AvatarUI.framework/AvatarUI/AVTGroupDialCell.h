@class UILabel, NSTimer, NSString;

@interface AVTGroupDialCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *label;
@property (retain, nonatomic) NSTimer *shimmerTimer;
@property (copy, nonatomic) NSString *string;

+ (id)cellIdentifier;
+ (id)labelFont;
+ (id)boldLabelFont;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)startShimmering;
- (void)stopShimmeringAnimated:(BOOL)a0;
- (void)setActiveItem:(BOOL)a0 animated:(BOOL)a1;
- (void)cancelShimmerTimer;
- (void)shimmerOnceWithCompletion:(id /* block */)a0;

@end
