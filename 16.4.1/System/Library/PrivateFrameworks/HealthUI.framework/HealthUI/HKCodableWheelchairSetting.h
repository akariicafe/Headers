@interface HKCodableWheelchairSetting : PBCodable <NSCopying> {
    struct APPLE_179 { unsigned char latestSupportedVersion : 1; unsigned char minimumSupportedVersion : 1; unsigned char isUsingWheelchair : 1; } _has;
}

@property (nonatomic) BOOL hasIsUsingWheelchair;
@property (nonatomic) BOOL isUsingWheelchair;
@property (nonatomic) BOOL hasLatestSupportedVersion;
@property (nonatomic) long long latestSupportedVersion;
@property (nonatomic) BOOL hasMinimumSupportedVersion;
@property (nonatomic) long long minimumSupportedVersion;

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
