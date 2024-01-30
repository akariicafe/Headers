@class NSString, NSData;

@interface HKCodableHealthRecordsProvider : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProviderName;
@property (retain, nonatomic) NSString *providerName;
@property (readonly, nonatomic) BOOL hasProviderURI;
@property (retain, nonatomic) NSString *providerURI;
@property (readonly, nonatomic) BOOL hasProviderLogo;
@property (retain, nonatomic) NSData *providerLogo;

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
