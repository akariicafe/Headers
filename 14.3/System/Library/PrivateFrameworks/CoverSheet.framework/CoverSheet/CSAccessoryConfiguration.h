@class CSLayoutStrategy;

@interface CSAccessoryConfiguration : NSObject <CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating>

@property (nonatomic) struct CGSize { double width; double height; } boltSize;
@property (nonatomic) double ringDiameter;
@property (nonatomic) double splashRingDiameter;
@property (nonatomic) double lineWidth;
@property (nonatomic) double chargePercentFont;
@property (nonatomic) double splashRingDiameterSizeXFactor;
@property (nonatomic) double splashRingDiameterSizeXXFactor;
@property (nonatomic) BOOL staticViewNeeded;
@property (nonatomic) double staticViewRingDiameter;
@property (nonatomic) double splashRingDiameterSizeXXXFactor;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy;
@property (readonly, nonatomic) BOOL showBolt;
@property (readonly, nonatomic) double boltPointSize;
@property (readonly, nonatomic) struct CGSize { double width; double height; } walletSize;
@property (readonly, nonatomic) double walletBottomOffset;
@property (readonly, nonatomic) double walletCornerRadius;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleScreenCoordinatesForSleeve;

+ (id)defaultConfiguration;
+ (id)staticViewConfiguration;

- (double)bottomContentInset;
- (double)dateBaselineToListY;
- (void).cxx_destruct;
- (double)listMinY;
- (double)dateTimeMostExtremeLeadingX;
- (double)dateTimeSubtitleMaximumWidth;
- (double)windowedAccessoryInset;
- (BOOL)containsCenteredDateTimeLayout;
- (double)timeToSubtitleLabelBaselineDifferenceY;
- (double)dateTimeMostExtremeTrailingX;
- (double)timeLabelBaselineY;
- (double)timeLabelOffsetForScrollPercent:(double)a0;
- (id)initWithStaticViewNeeded:(BOOL)a0;
- (void)setValuesWithStaticViewNeeded:(BOOL)a0;

@end
