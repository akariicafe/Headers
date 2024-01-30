@interface HDHeartbeatDatum : NSObject

@property (readonly, nonatomic) double timeSinceSequenceStart;
@property (readonly, nonatomic) BOOL precededByGap;

+ (id)datumWithTimeSinceSequenceStart:(double)a0 preceededByGap:(BOOL)a1;

@end
