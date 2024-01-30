@interface HMDCameraRecordingMetricUUIDUtilities : HMFObject

+ (id)UUIDRotationSalt;
+ (id)currentEphemeralUUIDWithUUID:(id)a0 rotationScheduleDays:(unsigned long long)a1;
+ (id)ephemeralUUIDWithUUID:(id)a0 forTimestamp:(unsigned long long)a1 rotationSchedule:(unsigned long long)a2;
+ (id)ephemeralUUIDWithUUID:(id)a0 forTimestamp:(unsigned long long)a1 rotationScheduleDays:(unsigned long long)a2;

@end
