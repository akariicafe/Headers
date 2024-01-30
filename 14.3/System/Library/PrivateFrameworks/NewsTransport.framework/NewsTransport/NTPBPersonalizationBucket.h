@interface NTPBPersonalizationBucket : PBCodable <NSCopying> {
    struct { unsigned char maximum : 1; unsigned char minimum : 1; unsigned char treatmentId : 1; } _has;
}

@property (nonatomic) BOOL hasMinimum;
@property (nonatomic) long long minimum;
@property (nonatomic) BOOL hasMaximum;
@property (nonatomic) long long maximum;
@property (nonatomic) BOOL hasTreatmentId;
@property (nonatomic) long long treatmentId;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
