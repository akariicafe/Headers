@class NSSet;

@interface BKSMutableTouchAuthenticationSpecification : BKSTouchAuthenticationSpecification

@property (copy, nonatomic) NSSet *displays;
@property (nonatomic) unsigned int slotID;
@property (nonatomic) unsigned long long authenticationMessageContext;
@property (nonatomic) unsigned int secureName;
@property (nonatomic) struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; } backgroundStatisticsRegion;
@property (nonatomic) float backgroundStatisticsForeground;
@property (nonatomic) float backgroundStatisticsPassingContrast;
@property (nonatomic) float backgroundStatisticsFailingContrast;
@property (nonatomic) unsigned long long hitTestInformationMask;

- (void)setSlotID:(unsigned int)a0;
- (void)setDisplays:(id)a0;
- (void)setAuthenticationMessageContext:(unsigned long long)a0;
- (void)setBackgroundStatisticsFailingContrast:(float)a0;
- (void)setBackgroundStatisticsForeground:(float)a0;
- (void)setBackgroundStatisticsPassingContrast:(float)a0;
- (void)setBackgroundStatisticsRegion:(struct { unsigned short x0; unsigned short x1; unsigned short x2; unsigned short x3; })a0;
- (void)setHitTestInformationMask:(unsigned long long)a0;
- (void)setSecureName:(unsigned int)a0;

@end
