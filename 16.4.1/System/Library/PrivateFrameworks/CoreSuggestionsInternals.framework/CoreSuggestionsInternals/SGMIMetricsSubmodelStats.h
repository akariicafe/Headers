@interface SGMIMetricsSubmodelStats : PBCodable <NSCopying> {
    struct { unsigned char ageOfTheSubmodelInDays : 1; unsigned char nbExtremelyDiscriminantTokensForIgnorability : 1; unsigned char nbExtremelyDiscriminantTokensForSaliency : 1; unsigned char nbHighlyDiscriminantTokensForIgnorability : 1; unsigned char nbHighlyDiscriminantTokensForSaliency : 1; } _has;
}

@property (nonatomic) BOOL hasAgeOfTheSubmodelInDays;
@property (nonatomic) unsigned int ageOfTheSubmodelInDays;
@property (nonatomic) BOOL hasNbHighlyDiscriminantTokensForSaliency;
@property (nonatomic) unsigned int nbHighlyDiscriminantTokensForSaliency;
@property (nonatomic) BOOL hasNbHighlyDiscriminantTokensForIgnorability;
@property (nonatomic) unsigned int nbHighlyDiscriminantTokensForIgnorability;
@property (nonatomic) BOOL hasNbExtremelyDiscriminantTokensForSaliency;
@property (nonatomic) unsigned int nbExtremelyDiscriminantTokensForSaliency;
@property (nonatomic) BOOL hasNbExtremelyDiscriminantTokensForIgnorability;
@property (nonatomic) unsigned int nbExtremelyDiscriminantTokensForIgnorability;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;

@end
