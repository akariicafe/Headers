@class CLPLOGENTRYVISIONTimeStamp, CLPLOGENTRYVISIONSimdDoubleMxN, CLPLOGENTRYVISIONLSLLocation, CLPLOGENTRYVISIONSimdDoubleM, CLPLOGENTRYVISIONLSLHeadingSupplInfo;

@interface CLPLOGENTRYVISIONLSLHeading : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char globalReferenceFrame : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp;
@property (readonly, nonatomic) BOOL hasRotationFromGlobalToDeviceFrame;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN *rotationFromGlobalToDeviceFrame;
@property (readonly, nonatomic) BOOL hasRotationFromGlobalToCameraFrame;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN *rotationFromGlobalToCameraFrame;
@property (readonly, nonatomic) BOOL hasRotationalAccuracyInRadians;
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleM *rotationalAccuracyInRadians;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasGlobalReferenceFrame;
@property (nonatomic) int globalReferenceFrame;
@property (readonly, nonatomic) BOOL hasLocation;
@property (retain, nonatomic) CLPLOGENTRYVISIONLSLLocation *location;
@property (readonly, nonatomic) BOOL hasSupplemantaryInfo;
@property (retain, nonatomic) CLPLOGENTRYVISIONLSLHeadingSupplInfo *supplemantaryInfo;

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
- (int)StringAsGlobalReferenceFrame:(id)a0;
- (id)globalReferenceFrameAsString:(int)a0;

@end
