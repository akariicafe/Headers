@class NSString, NSData, NTPBDate;

@interface NTPBAVAssetKey : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (retain, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL hasKeyData;
@property (retain, nonatomic) NSData *keyData;
@property (readonly, nonatomic) BOOL hasCreatedAt;
@property (retain, nonatomic) NTPBDate *createdAt;
@property (readonly, nonatomic) BOOL hasExpiresAt;
@property (retain, nonatomic) NTPBDate *expiresAt;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (void)dealloc;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
