@class NSString;

@interface AWDCoreRoutineMagicalMomentsRecommendedAppsHistogramInstance : PBCodable <NSCopying> {
    struct { unsigned char confidence : 1; unsigned char rank : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasRank;
@property (nonatomic) int rank;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) int confidence;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
