@class NSString, AFCoreAnalyticsDeviceContextPayload, NSNumber;

@interface _AFCoreAnalyticsDeviceContextPayloadMutation : NSObject <AFCoreAnalyticsDeviceContextPayloadMutating> {
    AFCoreAnalyticsDeviceContextPayload *_base;
    NSString *_nearbyProductType;
    NSString *_proximity;
    NSNumber *_alarmFiring;
    NSNumber *_timerFiring;
    NSString *_playbackState;
    NSNumber *_playbackRecency;
    NSString *_homeAnnouncementState;
    NSNumber *_homeAnnouncementRecency;
    NSString *_nearbyDevicesRequestIdentifier;
    NSString *_targetedResult;
    NSString *_contextIdentifier;
    struct _mutationFlags { unsigned char isDirty : 1; unsigned char hasNearbyProductType : 1; unsigned char hasProximity : 1; unsigned char hasAlarmFiring : 1; unsigned char hasTimerFiring : 1; unsigned char hasPlaybackState : 1; unsigned char hasPlaybackRecency : 1; unsigned char hasHomeAnnouncementState : 1; unsigned char hasHomeAnnouncementRecency : 1; unsigned char hasNearbyDevicesRequestIdentifier : 1; unsigned char hasTargetedResult : 1; unsigned char hasContextIdentifier : 1; } _mutationFlags;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isDirty;
- (void)setPlaybackState:(id)a0;
- (id)initWithBase:(id)a0;
- (void)setProximity:(id)a0;
- (void).cxx_destruct;
- (id)getPlaybackState;
- (void)setContextIdentifier:(id)a0;
- (void)setAlarmFiring:(id)a0;
- (void)setTimerFiring:(id)a0;
- (id)getAlarmFiring;
- (id)getContextIdentifier;
- (id)getHomeAnnouncementRecency;
- (id)getHomeAnnouncementState;
- (id)getNearbyDevicesRequestIdentifier;
- (id)getNearbyProductType;
- (id)getPlaybackRecency;
- (id)getProximity;
- (id)getTargetedResult;
- (id)getTimerFiring;
- (void)setHomeAnnouncementRecency:(id)a0;
- (void)setHomeAnnouncementState:(id)a0;
- (void)setNearbyDevicesRequestIdentifier:(id)a0;
- (void)setNearbyProductType:(id)a0;
- (void)setPlaybackRecency:(id)a0;
- (void)setTargetedResult:(id)a0;

@end
