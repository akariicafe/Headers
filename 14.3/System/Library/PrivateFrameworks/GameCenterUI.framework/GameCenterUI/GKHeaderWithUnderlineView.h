@class NSMutableDictionary, UIImageView, NSArray, UIView;

@interface GKHeaderWithUnderlineView : UICollectionReusableView

@property (nonatomic) BOOL isPinned;
@property (retain, nonatomic) UIView *pinnedBackdropView;
@property (nonatomic) BOOL didSetupConstraints;
@property (retain, nonatomic) UIView *underlineView;
@property (retain, nonatomic) UIImageView *shadowView;
@property (nonatomic) BOOL underlineHasRightMargin;
@property (retain, nonatomic) NSMutableDictionary *metrics;
@property (retain, nonatomic) NSArray *gutterConstraints;
@property (nonatomic) double leadingMargin;
@property (nonatomic) double trailingMargin;

+ (void)initialize;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)phoneMetrics;
+ (id)padMetrics;
+ (id)macMetrics;

- (void)pinningStateChangedTo:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateConstraints;
- (void)updateGutterConstraints;
- (void)establishConstraints;
- (void)applyLayoutAttributes:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (BOOL)drawsUnderline;

@end
