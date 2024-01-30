@class NSString;

@interface SecureBackupTermsInfo : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasVersion;
@property (retain, nonatomic) NSString *version;
@property (readonly, nonatomic) BOOL hasIcloudVersion;
@property (retain, nonatomic) NSString *icloudVersion;
@property (readonly, nonatomic) BOOL hasCountryCode;
@property (retain, nonatomic) NSString *countryCode;
@property (readonly, nonatomic) BOOL hasMetadata;
@property (retain, nonatomic) NSString *metadata;
@property (readonly, nonatomic) BOOL hasAltDSID;
@property (retain, nonatomic) NSString *altDSID;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)mergeFrom:(id)a0;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)description;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;

@end
