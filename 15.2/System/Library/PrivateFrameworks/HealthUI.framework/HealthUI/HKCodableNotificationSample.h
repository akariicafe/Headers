@class HKCodableMetadataDictionary;

@interface HKCodableNotificationSample : PBCodable <NSCopying> {
    struct { unsigned char categoryValue : 1; unsigned char dataType : 1; unsigned char endDate : 1; unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; unsigned char startDate : 1; } _has;
}

@property (nonatomic) BOOL hasStartDate;
@property (nonatomic) double startDate;
@property (nonatomic) BOOL hasEndDate;
@property (nonatomic) double endDate;
@property (readonly, nonatomic) BOOL hasMetadataDictionary;
@property (retain, nonatomic) HKCodableMetadataDictionary *metadataDictionary;
@property (nonatomic) BOOL hasCategoryValue;
@property (nonatomic) long long categoryValue;
@property (nonatomic) BOOL hasDataType;
@property (nonatomic) long long dataType;
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
