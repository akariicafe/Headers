@interface CNContactHeaderViewSizeAttributes : NSObject

@property (nonatomic) double _minHeight;
@property (nonatomic) double _maxHeight;
@property (nonatomic) double photoMinHeight;
@property (nonatomic) double photoMaxHeight;
@property (nonatomic) double photoMaxHeightPhoneLandscape;
@property (nonatomic) double photoMaxHeightPadCompact;
@property (nonatomic) double photoMaxHeightLowQuality;
@property (nonatomic) double photoMinTopMargin;
@property (nonatomic) double photoMinTopMarginPadCompact;
@property (nonatomic) double photoMaxTopMargin;
@property (nonatomic) double photoMinBottomMargin;
@property (nonatomic) double photoMinBottomMarginPhoneLandscape;
@property (nonatomic) double photoMinBottomMarginPadCompact;
@property (nonatomic) double photoMaxBottomMargin;
@property (nonatomic) double minNavbarTitleOffset;
@property (nonatomic) double maxNavbarTitleOffset;
@property (nonatomic) double headerBottomMargin;
@property (nonatomic) double posterMaxHeight;

+ (id)defaultAttributes;
+ (id)displayAttributes;
+ (id)displayAttributesWithNavBar;
+ (id)editingAttributes;
+ (id)editingAttributesWithNavBar;
+ (id)staticCollapsedDisplayAttributes;
+ (id)staticCollapsedDisplayAttributesWithNavBar;
+ (id)staticDisplayAttributes;
+ (id)staticDisplayAttributesWithNavBar;
+ (id)staticEditingAttributes;
+ (id)staticEditingAttributesWithNavBar;

- (id)init;
- (double)minHeight;
- (double)maxHeight;
- (double)valueBetweenMin:(double)a0 max:(double)a1 percentMax:(double)a2;
- (double)navbarTitleOffsetWithPercentMax:(double)a0;
- (double)photoBottomMarginWithPercentMax:(double)a0;
- (double)photoHeightWithPercentMax:(double)a0;
- (double)photoTopMarginWithPercentMax:(double)a0;

@end
