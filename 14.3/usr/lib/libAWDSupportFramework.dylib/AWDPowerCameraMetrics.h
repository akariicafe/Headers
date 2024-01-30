@interface AWDPowerCameraMetrics : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char cameraBackOnDuration : 1; unsigned char cameraFrontOnDuration : 1; unsigned char cameraTorchOnDuration : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasCameraFrontOnDuration;
@property (nonatomic) unsigned int cameraFrontOnDuration;
@property (nonatomic) BOOL hasCameraBackOnDuration;
@property (nonatomic) unsigned int cameraBackOnDuration;
@property (nonatomic) BOOL hasCameraTorchOnDuration;
@property (nonatomic) unsigned int cameraTorchOnDuration;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
