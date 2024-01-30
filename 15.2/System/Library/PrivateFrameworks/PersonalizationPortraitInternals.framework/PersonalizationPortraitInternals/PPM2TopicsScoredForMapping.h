@class NSString;

@interface PPM2TopicsScoredForMapping : PBCodable <NSCopying> {
    struct { unsigned char resultSizeLog10 : 1; unsigned char error : 1; unsigned char exclusionSpec : 1; unsigned char limitHit : 1; unsigned char timeLimited : 1; unsigned char timeSpec : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (readonly, nonatomic) BOOL hasMappingId;
@property (retain, nonatomic) NSString *mappingId;
@property (nonatomic) BOOL hasResultSizeLog10;
@property (nonatomic) unsigned int resultSizeLog10;
@property (nonatomic) BOOL hasTimeLimited;
@property (nonatomic) BOOL timeLimited;
@property (nonatomic) BOOL hasExclusionSpec;
@property (nonatomic) BOOL exclusionSpec;
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL error;
@property (nonatomic) BOOL hasTimeSpec;
@property (nonatomic) BOOL timeSpec;
@property (nonatomic) BOOL hasLimitHit;
@property (nonatomic) BOOL limitHit;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

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

@end
