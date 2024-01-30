@class NSString;

@interface HMDCloudSyncUploadReasonLogEvent : HMMLogEvent

@property (readonly) long long legacyPushCount;
@property (readonly) long long homeZonePushCount;
@property (readonly) long long homeManagerPushCount;
@property (readonly, nonatomic) NSString *saveReason;

+ (id)uploadReason:(id)a0 acceptedHomeManagerZonePush:(BOOL)a1;
+ (id)uploadReason:(id)a0 acceptedHomeZonePush:(BOOL)a1;
+ (id)uploadReason:(id)a0 acceptedLegacyPush:(BOOL)a1;

- (void).cxx_destruct;
- (id)initWithUploadReason:(id)a0 legacyPushCount:(long long)a1 homeZonePushCount:(long long)a2 homeManagerPushCount:(long long)a3;

@end
