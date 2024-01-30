@class CLPLOGENTRYVISIONTimeStamp, CLPLOGENTRYVISIONVIOInertialStateInfo, CLPLOGENTRYVISIONCGSize, NSData, CLPLOGENTRYVISIONVIOInertialCovarianceInfo, CLPLOGENTRYVISIONSimdFloatMxN;

@interface CLPLOGENTRYVISIONVIOEstimation : PBCodable <NSCopying> {
    struct { unsigned char trackingState : 1; } _has;
}

@property (nonatomic) BOOL hasTrackingState;
@property (nonatomic) int trackingState;
@property (readonly, nonatomic) BOOL hasOriginTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *originTimestamp;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp;
@property (readonly, nonatomic) BOOL hasInertialStateInfo;
@property (retain, nonatomic) CLPLOGENTRYVISIONVIOInertialStateInfo *inertialStateInfo;
@property (readonly, nonatomic) BOOL hasInertialState;
@property (retain, nonatomic) NSData *inertialState;
@property (readonly, nonatomic) BOOL hasInertialCovarianceInfo;
@property (retain, nonatomic) CLPLOGENTRYVISIONVIOInertialCovarianceInfo *inertialCovarianceInfo;
@property (readonly, nonatomic) BOOL hasInertialCovariance;
@property (retain, nonatomic) NSData *inertialCovariance;
@property (readonly, nonatomic) BOOL hasCameraPose;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdFloatMxN *cameraPose;
@property (readonly, nonatomic) BOOL hasCameraIntrinsics;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdFloatMxN *cameraIntrinsics;
@property (readonly, nonatomic) BOOL hasCameraImageResolution;
@property (retain, nonatomic) CLPLOGENTRYVISIONCGSize *cameraImageResolution;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (int)StringAsTrackingState:(id)a0;
- (id)trackingStateAsString:(int)a0;

@end
