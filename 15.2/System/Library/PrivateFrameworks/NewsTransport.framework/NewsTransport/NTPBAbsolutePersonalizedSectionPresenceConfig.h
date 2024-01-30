@interface NTPBAbsolutePersonalizedSectionPresenceConfig : PBCodable <NSCopying> {
    struct { unsigned char cTRToHide : 1; unsigned char cTRToShow : 1; unsigned char minProbabilityToShow : 1; unsigned char sectionEdition : 1; } _has;
}

@property (nonatomic) BOOL hasCTRToShow;
@property (nonatomic) double cTRToShow;
@property (nonatomic) BOOL hasCTRToHide;
@property (nonatomic) double cTRToHide;
@property (nonatomic) BOOL hasMinProbabilityToShow;
@property (nonatomic) double minProbabilityToShow;
@property (nonatomic) BOOL hasSectionEdition;
@property (nonatomic) unsigned long long sectionEdition;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
