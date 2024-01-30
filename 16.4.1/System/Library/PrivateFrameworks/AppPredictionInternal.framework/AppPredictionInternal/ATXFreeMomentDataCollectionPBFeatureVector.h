@interface ATXFreeMomentDataCollectionPBFeatureVector : PBCodable <NSCopying> {
    struct { unsigned char hasTimeBeforeNextWorkMeeting : 1; unsigned char lastWorkMeetingOfDayEnded : 1; unsigned char motionStateChangedFromMovingToStationary : 1; unsigned char motionStateChangedFromStationaryToWalking : 1; unsigned char phoneUnlocksWithinLast90seconds : 1; unsigned char previousAppLaunched : 1; unsigned char previousWorkMeetingEndedInLast20Minutes : 1; unsigned char previousWorkMeetingEndedInLastFiveMinutes : 1; unsigned char prevoiusAppLaunchCategory : 1; unsigned char timeSinceLastUnlock : 1; } _has;
}

@property (nonatomic) BOOL hasLastWorkMeetingOfDayEnded;
@property (nonatomic) int lastWorkMeetingOfDayEnded;
@property (nonatomic) BOOL hasPreviousWorkMeetingEndedInLastFiveMinutes;
@property (nonatomic) int previousWorkMeetingEndedInLastFiveMinutes;
@property (nonatomic) BOOL hasPreviousWorkMeetingEndedInLast20Minutes;
@property (nonatomic) int previousWorkMeetingEndedInLast20Minutes;
@property (nonatomic) BOOL hasHasTimeBeforeNextWorkMeeting;
@property (nonatomic) int hasTimeBeforeNextWorkMeeting;
@property (nonatomic) BOOL hasPhoneUnlocksWithinLast90seconds;
@property (nonatomic) int phoneUnlocksWithinLast90seconds;
@property (nonatomic) BOOL hasTimeSinceLastUnlock;
@property (nonatomic) int timeSinceLastUnlock;
@property (nonatomic) BOOL hasPreviousAppLaunched;
@property (nonatomic) int previousAppLaunched;
@property (nonatomic) BOOL hasPrevoiusAppLaunchCategory;
@property (nonatomic) int prevoiusAppLaunchCategory;
@property (nonatomic) BOOL hasMotionStateChangedFromStationaryToWalking;
@property (nonatomic) int motionStateChangedFromStationaryToWalking;
@property (nonatomic) BOOL hasMotionStateChangedFromMovingToStationary;
@property (nonatomic) int motionStateChangedFromMovingToStationary;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
