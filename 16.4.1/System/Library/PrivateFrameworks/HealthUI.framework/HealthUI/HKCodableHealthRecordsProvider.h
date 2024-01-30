@class NSString, NSData;

@interface HKCodableHealthRecordsProvider : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasProviderName;
@property (retain, nonatomic) NSString *providerName;
@property (readonly, nonatomic) BOOL hasProviderURI;
@property (retain, nonatomic) NSString *providerURI;
@property (readonly, nonatomic) BOOL hasProviderLogo;
@property (retain, nonatomic) NSData *providerLogo;

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
