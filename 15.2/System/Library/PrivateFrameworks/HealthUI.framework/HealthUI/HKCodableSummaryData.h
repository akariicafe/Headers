@class NSData, NSString, HKCodableQueryAnchor;

@interface HKCodableSummaryData : PBCodable <NSCopying> {
    struct { unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasContentData;
@property (retain, nonatomic) NSData *contentData;
@property (readonly, nonatomic) BOOL hasKindRawValue;
@property (retain, nonatomic) NSString *kindRawValue;
@property (readonly, nonatomic) BOOL hasDatabaseChangesQueryAnchor;
@property (retain, nonatomic) HKCodableQueryAnchor *databaseChangesQueryAnchor;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

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
