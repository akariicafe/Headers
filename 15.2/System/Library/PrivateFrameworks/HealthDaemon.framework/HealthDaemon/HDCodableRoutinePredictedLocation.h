@class NSData, HDCodableRoutineLocation;

@interface HDCodableRoutinePredictedLocation : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char nextEntryTime : 1; unsigned char modeOfTransportation : 1; unsigned char sourceType : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasLocationOfInterest;
@property (retain, nonatomic) HDCodableRoutineLocation *locationOfInterest;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasNextEntryTime;
@property (nonatomic) double nextEntryTime;
@property (nonatomic) BOOL hasModeOfTransportation;
@property (nonatomic) int modeOfTransportation;
@property (nonatomic) BOOL hasSourceType;
@property (nonatomic) int sourceType;
@property (readonly, nonatomic) BOOL hasGeoData;
@property (retain, nonatomic) NSData *geoData;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)sourceTypeAsString:(int)a0;
- (int)StringAsSourceType:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)modeOfTransportationAsString:(int)a0;
- (int)StringAsModeOfTransportation:(id)a0;

@end
