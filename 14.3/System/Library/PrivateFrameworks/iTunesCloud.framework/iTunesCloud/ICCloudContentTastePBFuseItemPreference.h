@class NSString;

@interface ICCloudContentTastePBFuseItemPreference : PBCodable <NSCopying> {
    struct { unsigned char adamId : 1; unsigned char createdOffsetMillis : 1; unsigned char preferenceType : 1; } _has;
}

@property (nonatomic) int preference;
@property (nonatomic) BOOL hasAdamId;
@property (nonatomic) long long adamId;
@property (readonly, nonatomic) BOOL hasExternalId;
@property (retain, nonatomic) NSString *externalId;
@property (nonatomic) BOOL hasCreatedOffsetMillis;
@property (nonatomic) long long createdOffsetMillis;
@property (nonatomic) BOOL hasPreferenceType;
@property (nonatomic) int preferenceType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
