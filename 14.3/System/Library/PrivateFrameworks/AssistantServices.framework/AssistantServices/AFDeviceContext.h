@class NSData, AFClockAlarmSnapshot, AFLocationSnapshot, AFDeviceContextMetadata, NSString, NSUUID, AFMultiUserStateSnapshot, AFMediaPlaybackStateSnapshot, AFPeerInfo, NSMutableDictionary, AFHomeAnnouncementSnapshot, AFClockTimerSnapshot;

@interface AFDeviceContext : NSObject <NSCopying, NSSecureCoding> {
    NSMutableDictionary *_serializedBackingStore;
    long long _dirtyFlags;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) AFClockAlarmSnapshot *alarmSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *alarmSnapshotMetadata;
@property (readonly, nonatomic) AFClockTimerSnapshot *timerSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *timerSnapshotMetadata;
@property (readonly, nonatomic) AFMediaPlaybackStateSnapshot *playbackStateSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *playbackStateMetadata;
@property (readonly, nonatomic) AFHomeAnnouncementSnapshot *homeAnnouncementSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *homeAnnouncementSnapshotMetadata;
@property (readonly, nonatomic) long long heardVoiceTrigger;
@property (readonly, nonatomic) AFDeviceContextMetadata *heardVoiceTriggerMetadata;
@property (readonly, nonatomic) NSData *myriadAdvertisementContext;
@property (readonly, nonatomic) AFMultiUserStateSnapshot *multiUserStateSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *multiUserStateMetadata;
@property (readonly, nonatomic) AFLocationSnapshot *locationSnapshot;
@property (readonly, nonatomic) AFDeviceContextMetadata *locationMetadata;
@property (readonly, nonatomic) BOOL fromLocalDevice;
@property (readonly, nonatomic) NSString *contextCollectorSource;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) AFPeerInfo *deviceInfo;
@property (readonly, nonatomic) long long privacyClass;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)allContextKeys;
- (id)_safeContextDictionary;
- (id)_serializedBackingStoreIncludingKeys:(id)a0 excludingMandatoryKeys:(id)a1;
- (id)initWithSerializedBackingStore:(id)a0 fromLocalDevice:(BOOL)a1 contextCollectorSource:(id)a2;
- (id)partialSerializedBackingStoreIncludingKeys:(id)a0 excludingMandatoryKeys:(id)a1;
- (id)partiallyUpdatedContextForDeviceContextKeys:(id)a0 excludingMandatoryKeys:(id)a1 fromDeviceContext:(id)a2;
- (id)deviceContextForDeviceContextKeys:(id)a0 excludingMandatoryKeys:(id)a1;
- (id)af_serviceDeviceContextForKeys:(id)a0;
- (id)af_serviceDeviceContextForKeys:(id)a0 excludeContextExpiredBefore:(id)a1;
- (id)serializedBackingStore;
- (unsigned long long)hash;
- (BOOL)isValid;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)serializedContextForKey:(id)a0;
- (id)contextMetadataForKey:(id)a0;
- (BOOL)af_didHearVoiceTrigger;
- (void)encodeWithCoder:(id)a0;

@end
