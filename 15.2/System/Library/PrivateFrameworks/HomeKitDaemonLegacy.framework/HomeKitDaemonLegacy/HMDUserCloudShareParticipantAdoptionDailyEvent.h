@class NSNumber;

@interface HMDUserCloudShareParticipantAdoptionDailyEvent : HMDCloudShareTrustManagerLogEvent

@property (readonly, copy) NSNumber *configureState;
@property (readonly, copy) NSNumber *hasOwnerCloudShareID;

- (void).cxx_destruct;
- (id)eventName;
- (id)serializedEvent;
- (id)initWithConfigureState:(long long)a0 hasOwnerCloudShareID:(BOOL)a1;

@end
