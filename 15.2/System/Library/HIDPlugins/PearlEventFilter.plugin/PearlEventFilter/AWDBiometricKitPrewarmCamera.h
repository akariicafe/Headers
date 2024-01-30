@interface AWDBiometricKitPrewarmCamera : PBCodable <NSCopying> {
    struct { unsigned char machTimestampInMillisecond : 1; unsigned char prewarmCameraEventSource : 1; unsigned char timestamp : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasPrewarmCameraEventSource;
@property (nonatomic) long long prewarmCameraEventSource;
@property (nonatomic) BOOL hasMachTimestampInMillisecond;
@property (nonatomic) unsigned long long machTimestampInMillisecond;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
