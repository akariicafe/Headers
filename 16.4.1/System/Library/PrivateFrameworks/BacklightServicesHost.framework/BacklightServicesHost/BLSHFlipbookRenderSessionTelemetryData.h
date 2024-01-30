@class NSArray, NSString, BLSHFlipbookFramesHistogram;

@interface BLSHFlipbookRenderSessionTelemetryData : NSObject

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) NSArray *environmentIdentifiers;
@property (readonly, nonatomic) NSString *reasonEnded;
@property (readonly, nonatomic) BLSHFlipbookFramesHistogram *sessionFramesHistogram;
@property (readonly, nonatomic) double totalPreparationDuration;
@property (readonly, nonatomic) double accumulatedLayoutDuration;
@property (readonly, nonatomic) double accumulatedRenderDuration;
@property (readonly, nonatomic) BOOL preventedSleep;
@property (readonly, nonatomic) double preventedSleepDuration;
@property (readonly, nonatomic) BOOL didFailToRender;
@property (readonly, nonatomic) unsigned int timedOutEnvironmentCount;
@property (readonly, nonatomic) NSString *firstEnvironmentIdentifier;
@property (readonly, nonatomic) unsigned int environmentCount;

- (id)description;
- (void).cxx_destruct;
- (id)initWithTimestamp:(double)a0 environmentIdentifiers:(id)a1 reasonEnded:(id)a2 sessionFramesHistogram:(id)a3 totalPreparationDuration:(double)a4 accumulatedLayoutDuration:(double)a5 accumulatedRenderDuration:(double)a6 preventedSleepDuration:(double)a7 didFailToRender:(BOOL)a8 timedOutEnvironmentCount:(unsigned int)a9;

@end
