@class NSPPrivacyProxyPolicy;

@interface NSPPrivacyProxyPolicyTierMap : PBCodable <NSCopying>

@property (nonatomic) int tier;
@property (retain, nonatomic) NSPPrivacyProxyPolicy *policy;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)mergeFrom:(id)a0;
- (int)StringAsTier:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)tierAsString:(int)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
