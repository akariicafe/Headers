@interface AWDWiFiDPSNotification : PBCodable <NSCopying> {
    struct { unsigned char timestamp : 1; unsigned char problemAC : 1; unsigned char symptom : 1; unsigned char facetimeCallInProgress : 1; } _has;
}

@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) BOOL hasSymptom;
@property (nonatomic) int symptom;
@property (nonatomic) BOOL hasProblemAC;
@property (nonatomic) unsigned int problemAC;
@property (nonatomic) BOOL hasFacetimeCallInProgress;
@property (nonatomic) BOOL facetimeCallInProgress;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (int)StringAsSymptom:(id)a0;
- (id)symptomAsString:(int)a0;

@end
