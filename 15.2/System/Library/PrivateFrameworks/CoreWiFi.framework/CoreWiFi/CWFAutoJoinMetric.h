@class NSDictionary, NSArray, CWFAutoJoinParameters, SFRemoteHotspotDevice, NSError, CWFScanResult, NSString;

@interface CWFAutoJoinMetric : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL result;
@property (nonatomic) unsigned long long duration;
@property (nonatomic) unsigned long long durationFromLinkDownTrigger;
@property (nonatomic) unsigned long long durationFromDisplayOnTrigger;
@property (nonatomic) unsigned long long durationFromDeviceUnlockTrigger;
@property (nonatomic) unsigned long long durationFromWiFiPowerOnTrigger;
@property (nonatomic) long long previousNonRetryAutoJoinTrigger;
@property (nonatomic) unsigned long long durationFromNonRetryAutoJoinTrigger;
@property (copy, nonatomic) NSError *error;
@property (nonatomic) BOOL wasCancelled;
@property (nonatomic) BOOL wasAborted;
@property (copy, nonatomic) CWFAutoJoinParameters *autoJoinParameters;
@property (nonatomic) long long retrySchedule;
@property (nonatomic) unsigned long long retryScheduleIndex;
@property (nonatomic) BOOL isSSIDTransition;
@property (nonatomic) BOOL didUseLocationOptimizedChannelList;
@property (nonatomic) BOOL didDetectColocatedNetworkEnvironment;
@property (nonatomic) BOOL didDeferJoin;
@property (nonatomic) BOOL didJoinLessPreferredNetwork;
@property (nonatomic) unsigned long long scanDuration;
@property (copy, nonatomic) NSArray *scanChannels;
@property (nonatomic) unsigned long long preAssociationScanDuration;
@property (copy, nonatomic) NSArray *preAssociationScanChannels;
@property (copy, nonatomic) NSArray *scanErrors;
@property (nonatomic) unsigned long long GASQueryDuration;
@property (copy, nonatomic) NSArray *GASQueryNetworks;
@property (copy, nonatomic) NSArray *GASQueryErrors;
@property (nonatomic) unsigned long long joinDuration;
@property (copy, nonatomic) NSArray *joinErrors;
@property (copy, nonatomic) CWFScanResult *network;
@property (nonatomic) BOOL autoHotspotWasAttempted;
@property (nonatomic) BOOL autoHotspotResult;
@property (nonatomic) unsigned long long autoHotspotDuration;
@property (nonatomic) BOOL autoHotspotWasAborted;
@property (copy, nonatomic) NSError *autoHotspotError;
@property (nonatomic) long long autoHotspotMode;
@property (nonatomic) unsigned long long autoHotspotBrowseDuration;
@property (copy, nonatomic) NSError *autoHotspotBrowseError;
@property (nonatomic) unsigned long long autoHotspotJoinDuration;
@property (copy, nonatomic) NSArray *autoHotspotJoinErrors;
@property (copy, nonatomic) SFRemoteHotspotDevice *hotspot;
@property (readonly) NSString *coreAnalyticsEventName;
@property (readonly) NSDictionary *coreAnalyticsEventPayload;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)__descriptionForError:(id)a0;

@end
