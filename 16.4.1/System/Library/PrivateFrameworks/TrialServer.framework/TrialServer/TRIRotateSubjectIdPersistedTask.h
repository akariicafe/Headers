@class NSString, TRIPBTimestamp;

@interface TRIRotateSubjectIdPersistedTask : TRIPBMessage

@property (nonatomic) BOOL forceUpdate;
@property (nonatomic) BOOL hasForceUpdate;
@property (copy, nonatomic) NSString *deviceId;
@property (nonatomic) BOOL hasDeviceId;
@property (retain, nonatomic) TRIPBTimestamp *nextRotationTimestamp;
@property (nonatomic) BOOL hasNextRotationTimestamp;

+ (id)descriptor;

@end
