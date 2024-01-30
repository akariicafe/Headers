@class NSString;

@interface AWDHomeKitCameraRecordingFragmentAnalyzed : PBCodable <NSCopying> {
    struct { unsigned char analysisResultCode : 1; unsigned char duration : 1; unsigned char sequenceNumber : 1; unsigned char timestamp : 1; unsigned char recordingReason : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasDuration;
@property (nonatomic) unsigned long long duration;
@property (readonly, nonatomic) BOOL hasCameraUUID;
@property (retain, nonatomic) NSString *cameraUUID;
@property (readonly, nonatomic) BOOL hasSessionUUID;
@property (retain, nonatomic) NSString *sessionUUID;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) unsigned long long sequenceNumber;
@property (nonatomic) BOOL hasAnalysisResultCode;
@property (nonatomic) unsigned long long analysisResultCode;
@property (readonly, nonatomic) BOOL hasClipModelID;
@property (retain, nonatomic) NSString *clipModelID;
@property (nonatomic) BOOL hasRecordingReason;
@property (nonatomic) int recordingReason;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)recordingReasonAsString:(int)a0;
- (int)StringAsRecordingReason:(id)a0;

@end
