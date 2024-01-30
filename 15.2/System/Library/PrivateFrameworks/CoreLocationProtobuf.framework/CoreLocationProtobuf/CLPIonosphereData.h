@interface CLPIonosphereData : PBCodable <NSCopying> {
    struct { unsigned char applicableTimeSec : 1; unsigned char d2vtecDphi2 : 1; unsigned char d2vtecDtheta2 : 1; unsigned char d2vtecDthetaphi : 1; unsigned char dvtecDphi : 1; unsigned char dvtecDtheta : 1; unsigned char estimatorAgeSec : 1; unsigned char geodeticAltitudeM : 1; unsigned char hmaxKm : 1; unsigned char latitudeDeg : 1; unsigned char longitudeDeg : 1; unsigned char pd2vtecDphi2D2vtecDphi2 : 1; unsigned char pd2vtecDtheta2D2vtecDtheta2 : 1; unsigned char pd2vtecDthetadphiD2vtecDthetadphi : 1; unsigned char pdvtecDphiDvtecDphi : 1; unsigned char pdvtecDthetaDvtecDtheta : 1; unsigned char phmaxHmaxKm2 : 1; unsigned char pvtec0Vtec0 : 1; unsigned char vtec0 : 1; } _has;
}

@property (nonatomic) BOOL hasLatitudeDeg;
@property (nonatomic) double latitudeDeg;
@property (nonatomic) BOOL hasLongitudeDeg;
@property (nonatomic) double longitudeDeg;
@property (nonatomic) BOOL hasGeodeticAltitudeM;
@property (nonatomic) double geodeticAltitudeM;
@property (nonatomic) BOOL hasApplicableTimeSec;
@property (nonatomic) double applicableTimeSec;
@property (nonatomic) BOOL hasHmaxKm;
@property (nonatomic) double hmaxKm;
@property (nonatomic) BOOL hasVtec0;
@property (nonatomic) double vtec0;
@property (nonatomic) BOOL hasDvtecDtheta;
@property (nonatomic) double dvtecDtheta;
@property (nonatomic) BOOL hasDvtecDphi;
@property (nonatomic) double dvtecDphi;
@property (nonatomic) BOOL hasD2vtecDtheta2;
@property (nonatomic) double d2vtecDtheta2;
@property (nonatomic) BOOL hasD2vtecDthetaphi;
@property (nonatomic) double d2vtecDthetaphi;
@property (nonatomic) BOOL hasD2vtecDphi2;
@property (nonatomic) double d2vtecDphi2;
@property (nonatomic) BOOL hasEstimatorAgeSec;
@property (nonatomic) double estimatorAgeSec;
@property (nonatomic) BOOL hasPhmaxHmaxKm2;
@property (nonatomic) double phmaxHmaxKm2;
@property (nonatomic) BOOL hasPvtec0Vtec0;
@property (nonatomic) double pvtec0Vtec0;
@property (nonatomic) BOOL hasPdvtecDthetaDvtecDtheta;
@property (nonatomic) double pdvtecDthetaDvtecDtheta;
@property (nonatomic) BOOL hasPdvtecDphiDvtecDphi;
@property (nonatomic) double pdvtecDphiDvtecDphi;
@property (nonatomic) BOOL hasPd2vtecDtheta2D2vtecDtheta2;
@property (nonatomic) double pd2vtecDtheta2D2vtecDtheta2;
@property (nonatomic) BOOL hasPd2vtecDthetadphiD2vtecDthetadphi;
@property (nonatomic) double pd2vtecDthetadphiD2vtecDthetadphi;
@property (nonatomic) BOOL hasPd2vtecDphi2D2vtecDphi2;
@property (nonatomic) double pd2vtecDphi2D2vtecDphi2;

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
