@class TRIPBTimestamp;

@interface TRIPersistedAllocationStatusCursor : TRIPBMessage

@property (retain, nonatomic) TRIPBTimestamp *lowerBoundExclusive;
@property (nonatomic) BOOL hasLowerBoundExclusive;

+ (id)descriptor;

@end
