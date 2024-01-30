@class NSString;

@interface AWDHomeKitCameraRecordingClipNotification : PBCodable <NSCopying> {
    struct { unsigned char duration : 1; unsigned char recordingEventTriggers : 1; unsigned char sequenceNumber : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (readonly, nonatomic) BOOL hasCameraUUID;
@property (retain, nonatomic) NSString *cameraUUID;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;
@property (nonatomic) BOOL hasRecordingEventTriggers;
@property (nonatomic) unsigned long long recordingEventTriggers;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned long long sequenceNumber;

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
