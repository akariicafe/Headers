@class NSString, NSMutableArray;

@interface NPKIDVRemoteDeviceProtoGenerateKeyRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasCredentialIdentifier;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) BOOL hasKeyTypeString;
@property (retain, nonatomic) NSString *keyTypeString;
@property (retain, nonatomic) NSMutableArray *configuredPartitionsIdentifiers;

+ (Class)configuredPartitionsIdentifiersType;

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
- (void)addConfiguredPartitionsIdentifiers:(id)a0;
- (unsigned long long)configuredPartitionsIdentifiersCount;
- (void)clearConfiguredPartitionsIdentifiers;
- (id)configuredPartitionsIdentifiersAtIndex:(unsigned long long)a0;

@end
