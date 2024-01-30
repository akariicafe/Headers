@interface CNContactHeaderViewSizeAttributes : NSObject

@property (nonatomic) double _minHeight;
@property (nonatomic) double _maxHeight;
@property (nonatomic) double photoMinHeight;
@property (nonatomic) double photoMaxHeight;
@property (nonatomic) double photoMinTopMargin;
@property (nonatomic) double photoMaxTopMargin;
@property (nonatomic) double photoMinBottomMargin;
@property (nonatomic) double photoMaxBottomMargin;
@property (nonatomic) double minNavbarTitleOffset;
@property (nonatomic) double maxNavbarTitleOffset;

+ (id)defaultAttributes;
+ (id)displayAttributes;
+ (id)displayAttributesWithNavBar;
+ (id)editingAttributes;
+ (id)editingAttributesWithNavBar;

- (double)minHeight;
- (double)maxHeight;
- (id)init;
- (double)valueBetweenMin:(double)a0 max:(double)a1 percentMax:(double)a2;
- (double)navbarTitleOffsetWithPercentMax:(double)a0;
- (double)photoBottomMarginWithPercentMax:(double)a0;
- (double)photoHeightWithPercentMax:(double)a0;
- (double)photoTopMarginWithPercentMax:(double)a0;

@end
