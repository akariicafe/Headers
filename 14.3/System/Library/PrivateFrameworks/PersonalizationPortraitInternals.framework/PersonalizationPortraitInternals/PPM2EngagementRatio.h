@class NSString;

@interface PPM2EngagementRatio : PBCodable <NSCopying> {
    struct { unsigned char domain : 1; unsigned char engagedCount : 1; unsigned char evaluatedCount : 1; unsigned char k : 1; unsigned char rejectedCount : 1; } _has;
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

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (int)StringAsDomain:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)domainAsString:(int)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
