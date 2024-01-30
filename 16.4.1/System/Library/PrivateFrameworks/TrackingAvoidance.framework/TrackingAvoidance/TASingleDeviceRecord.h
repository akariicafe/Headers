@class NSDate, NSUUID, NSData, NSMutableDictionary, NSMutableSet, NSMutableArray, TASPAdvertisement, TAAccessoryInformation;

@interface TASingleDeviceRecord : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) double keepAliveInterval;
@property (retain, nonatomic) NSMutableArray *stagedDetectionResults;
@property (retain, nonatomic) NSMutableSet *backgroundDetectionTypesInTravelSession;
@property (retain, nonatomic) NSMutableDictionary *backgroundDetectionCount;
@property (retain, nonatomic) NSMutableDictionary *firstBackgroundDetectionDate;
@property (readonly, nonatomic) NSData *address;
@property (readonly, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) TAAccessoryInformation *accessoryInfo;
@property (nonatomic) unsigned long long state;
@property (nonatomic) unsigned long long AISFetchState;
@property (nonatomic) unsigned long long type;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) TASPAdvertisement *latestAdvertisement;
@property (readonly, nonatomic) NSDate *earliestObservationDate;
@property (readonly, nonatomic) NSDate *keepStagedDetectionAliveUntilDate;
@property (nonatomic) BOOL hasSurfacedNotification;
@property (readonly, nonatomic) BOOL hasStagedImmediateDetections;
@property (readonly, nonatomic) unsigned long long numStagedDetections;
@property (readonly, nonatomic) NSDate *firstStagedDetectionDate;
@property (readonly, nonatomic) NSDate *latestBeepOnMoveDate;
@property (readonly, nonatomic) NSDate *firstBeepOnMoveDate;
@property (readonly, nonatomic) unsigned long long numBeepOnMove;
@property (readonly, nonatomic) unsigned long long numSurfacedAlerts;
@property (readonly, nonatomic) NSDate *firstSurfacedAlertDate;
@property (readonly, nonatomic) unsigned long long firstSurfacedAlertType;
@property (readonly, nonatomic) NSDate *lastSurfacedAlertDate;
@property (readonly, nonatomic) unsigned long long playSoundSuccessCount;
@property (readonly, nonatomic) unsigned long long playSoundFailureCount;
@property (readonly, nonatomic) unsigned long long playSoundAttemptCount;
@property (readonly, nonatomic) NSDate *latestPlaySoundAttemptDate;
@property (nonatomic) unsigned long long AISFetchCount;
@property (readonly, nonatomic) NSDate *lastAISAttemptDate;

- (void)encodeWithCoder:(id)a0;
- (id)productName;
- (id)initWithCoder:(id)a0;
- (id)descriptionDictionary;
- (void)processBackgroundDetection:(id)a0;
- (unsigned long long)getDeviceType;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (void)purgeStagedDetectionsWithClock:(id)a0;
- (void)stageDetection:(id)a0;
- (id)_generateTAUUID:(id)a0;
- (BOOL)_isAISFetchComplete;
- (BOOL)_isKeepInStagingUntilComplete:(id)a0;
- (BOOL)_shouldPushStagedDetection:(id)a0;
- (void)_updateEarliestObservationDateWithDate:(id)a0;
- (unsigned long long)backgroundDetectionCountForDetectionType:(unsigned long long)a0;
- (void)clearAllStagedDetections;
- (id)firstDetectionDateForDetectionType:(unsigned long long)a0;
- (id)getDetectionsReadyToPushAndCheckForAISFetch;
- (id)getStagedDetections;
- (id)initWithDeviceAdvertisement:(id)a0 state:(unsigned long long)a1 type:(unsigned long long)a2 date:(id)a3 keepAliveInterval:(double)a4;
- (void)mergeWithAnotherSingleDeviceRecord:(id)a0;
- (id)prepareAISFetchTAOutgoingRequest:(id)a0 lastAISFetchDate:(id)a1;
- (id)preparePlaySoundTAOutgoingRequest:(id)a0 lastPlaySoundDate:(id)a1;
- (void)processAISFetchEvent:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
- (void)processPlaySoundSuccess:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
- (void)processSurfacedAlert:(id)a0;
- (void)updateAdvertisement:(id)a0 andAppendOutgoingRequestsTo:(id)a1;
- (void)updateSingleDeviceRecordOnSessionChangeWithCurrentDate:(id)a0;

@end
