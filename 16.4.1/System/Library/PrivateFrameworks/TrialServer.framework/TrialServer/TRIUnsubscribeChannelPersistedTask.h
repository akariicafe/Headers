@class NSString, TRIPBTimestamp;

@interface TRIUnsubscribeChannelPersistedTask : TRIPBMessage

@property (copy, nonatomic) NSString *experimentId;
@property (nonatomic) BOOL hasExperimentId;
@property (retain, nonatomic) TRIPBTimestamp *startTimestamp;
@property (nonatomic) BOOL hasStartTimestamp;

+ (id)descriptor;

@end
