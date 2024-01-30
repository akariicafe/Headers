@class CSLayoutStrategy, CSMagSafeRingConfiguration;

@interface CSMagSafeAccessoryConfiguration : NSObject <CSPersistentContentLayoutProviding, CSDateTimeLayoutAggregating>

@property (nonatomic) CSMagSafeRingConfiguration *ring;
@property (nonatomic) CSMagSafeRingConfiguration *auxiliaryRing;
@property (nonatomic) BOOL staticViewNeeded;
@property (nonatomic) double staticViewRingDiameter;
@property (retain, nonatomic) CSLayoutStrategy *layoutStrategy;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } visibleScreenCoordinatesForSleeve;

+ (id)defaultConfiguration;
+ (id)batteryCaseConfiguration;
+ (id)staticViewConfiguration;
+ (id)configuration:(id)a0 withBatteryPack:(BOOL)a1;

- (double)bottomContentInset;
- (double)timeLabelBaselineY;
- (double)dateBaselineToListY;
- (void).cxx_destruct;
- (double)timeToSubtitleLabelBaselineDifferenceY;
- (double)dateTimeMostExtremeLeadingX;
- (double)dateTimeMostExtremeTrailingX;
- (BOOL)containsCenteredDateTimeLayout;
- (double)listMinY;
- (double)windowedAccessoryInset;
- (double)dateTimeSubtitleMaximumWidth;
- (double)timeLabelOffsetForScrollPercent:(double)a0;
- (id)initWithStaticViewNeeded:(BOOL)a0;

@end
