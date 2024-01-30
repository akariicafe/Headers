@class TADeviceRecordSettings, NSMutableDictionary, NSDate;

@interface TADeviceRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) NSMutableDictionary *deviceRecord;
@property (retain, nonatomic) NSDate *lastPurgeDate;
@property (retain, nonatomic) NSDate *lastScanAttemptDate;
@property (retain, nonatomic) TADeviceRecordSettings *settings;

+ (id)notificationInternalStateToString:(unsigned long long)a0;
+ (unsigned long long)_convertTANotificationStateToTANotificationInternalState:(unsigned long long)a0;
+ (BOOL)_isKnownDevice:(unsigned long long)a0;

- (id)initWithSettings:(id)a0;
- (id)descriptionDictionary;
- (void)_clearStagedDetectionsForDevice:(id)a0;
- (void)_didSurfaceNotificationFor:(id)a0;
- (void)_updateLatestAdvertisement:(id)a0;
- (void)purgeWithClock:(id)a0;
- (void)_createRecordIfNecessaryWithAddress:(id)a0 withDate:(id)a1;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)getDeviceType:(id)a0;
- (void)_setDevice:(id)a0 withExternalState:(unsigned long long)a1 withDate:(id)a2;
- (id)initWithCoder:(id)a0;
- (id)_getDeviceRecord:(id)a0;
- (id)description;
- (unsigned long long)getDeviceNotificationState:(id)a0;
- (void)stageDetectionResults:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)stageDevice:(id)a0 withCurrentDate:(id)a1;
- (void)_setDevice:(id)a0 withType:(unsigned long long)a1 withDate:(id)a2;
- (void)checkForScanRequestsWithClock:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
- (id)getLatestAdvertisement:(id)a0;
- (void)ingestTAEvent:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
- (id)getDetectionResultsToPush;
- (void)mergeWithAnotherDeviceRecord:(id)a0;
- (id)_determineKeepInStagingUntil:(id)a0;
- (BOOL)hasSurfacedNotificationFor:(id)a0;
- (BOOL)isKnownDevice:(id)a0;
- (void)logDeviceRecord;
- (void)updateDeviceRecordOnSessionChangeWithCurrentDate:(id)a0;
- (void)_setDevice:(id)a0 withInternalState:(unsigned long long)a1 withDate:(id)a2;
- (void)_performNotificationStateTransitionActionsForDevice:(id)a0 from:(unsigned long long)a1 to:(unsigned long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
