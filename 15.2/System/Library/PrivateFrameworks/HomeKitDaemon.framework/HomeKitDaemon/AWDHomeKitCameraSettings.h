@class NSString;

@interface AWDHomeKitCameraSettings : PBCodable <NSCopying> {
    struct { unsigned char recordingEventTriggers : 1; unsigned char isInclusionZone : 1; unsigned char isReachabilityNotificationEnabled : 1; unsigned char isRecordingAudioEnabled : 1; unsigned char isRecordingCapable : 1; unsigned char isRecordingEnabled : 1; unsigned char isSmartBulletinBoardNotificationEnabled : 1; } _has;
}

@property (nonatomic) BOOL hasIsRecordingEnabled;
@property (nonatomic) BOOL isRecordingEnabled;
@property (nonatomic) BOOL hasIsRecordingAudioEnabled;
@property (nonatomic) BOOL isRecordingAudioEnabled;
@property (nonatomic) BOOL hasRecordingEventTriggers;
@property (nonatomic) unsigned int recordingEventTriggers;
@property (nonatomic) BOOL hasIsSmartBulletinBoardNotificationEnabled;
@property (nonatomic) BOOL isSmartBulletinBoardNotificationEnabled;
@property (nonatomic) BOOL hasIsInclusionZone;
@property (nonatomic) BOOL isInclusionZone;
@property (nonatomic) BOOL hasIsReachabilityNotificationEnabled;
@property (nonatomic) BOOL isReachabilityNotificationEnabled;
@property (nonatomic) BOOL hasIsRecordingCapable;
@property (nonatomic) BOOL isRecordingCapable;
@property (readonly, nonatomic) BOOL hasNumActivityZonesBinString;
@property (retain, nonatomic) NSString *numActivityZonesBinString;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
