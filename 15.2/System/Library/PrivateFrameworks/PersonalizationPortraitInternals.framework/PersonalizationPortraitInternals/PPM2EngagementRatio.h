@class NSString;

@interface PPM2EngagementRatio : PBCodable <NSCopying> {
    struct { unsigned char domain : 1; unsigned char engagedCount : 1; unsigned char evaluatedCount : 1; unsigned char k : 1; unsigned char offeredCount : 1; unsigned char rejectedCount : 1; } _has;
}

@property (nonatomic) BOOL hasK;
@property (nonatomic) unsigned int k;
@property (nonatomic) BOOL hasEvaluatedCount;
@property (nonatomic) unsigned int evaluatedCount;
@property (nonatomic) BOOL hasEngagedCount;
@property (nonatomic) unsigned int engagedCount;
@property (nonatomic) BOOL hasRejectedCount;
@property (nonatomic) unsigned int rejectedCount;
@property (nonatomic) BOOL hasDomain;
@property (nonatomic) int domain;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;
@property (nonatomic) BOOL hasOfferedCount;
@property (nonatomic) unsigned int offeredCount;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (retain, nonatomic) NSString *mappingId;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (id)domainAsString:(int)a0;
- (int)StringAsDomain:(id)a0;

@end
