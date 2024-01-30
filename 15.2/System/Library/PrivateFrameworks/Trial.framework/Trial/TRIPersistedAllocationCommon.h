@class TRIPBTimestamp;

@interface TRIPersistedAllocationCommon : TRIPBMessage

@property (nonatomic) unsigned int type;
@property (nonatomic) BOOL hasType;
@property (retain, nonatomic) TRIPBTimestamp *timestamp;
@property (nonatomic) BOOL hasTimestamp;

+ (id)descriptor;

@end
