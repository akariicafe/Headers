@class NSString;

@interface PPM2LocationsScored : PBCodable <NSCopying> {
    struct { unsigned char resultSizeLog10 : 1; unsigned char error : 1; unsigned char exclusionSpec : 1; unsigned char limitHit : 1; unsigned char timeLimited : 1; unsigned char timeSpec : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasBundleId;
@property (retain, nonatomic) NSString *bundleId;
@property (nonatomic) BOOL hasResultSizeLog10;
@property (nonatomic) unsigned int resultSizeLog10;
@property (nonatomic) BOOL hasLimitHit;
@property (nonatomic) BOOL limitHit;
@property (nonatomic) BOOL hasTimeSpec;
@property (nonatomic) BOOL timeSpec;
@property (nonatomic) BOOL hasTimeLimited;
@property (nonatomic) BOOL timeLimited;
@property (nonatomic) BOOL hasExclusionSpec;
@property (nonatomic) BOOL exclusionSpec;
@property (nonatomic) BOOL hasError;
@property (nonatomic) BOOL error;
@property (readonly, nonatomic) BOOL hasActiveTreatments;
@property (retain, nonatomic) NSString *activeTreatments;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
