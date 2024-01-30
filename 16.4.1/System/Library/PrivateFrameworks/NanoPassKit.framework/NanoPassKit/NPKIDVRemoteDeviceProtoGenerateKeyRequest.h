@class NSString, NSMutableArray;

@interface NPKIDVRemoteDeviceProtoGenerateKeyRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasCredentialIdentifier;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (readonly, nonatomic) BOOL hasKeyTypeString;
@property (retain, nonatomic) NSString *keyTypeString;
@property (retain, nonatomic) NSMutableArray *configuredPartitionsIdentifiers;

+ (Class)configuredPartitionsIdentifiersType;

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
- (void)addConfiguredPartitionsIdentifiers:(id)a0;
- (void)clearConfiguredPartitionsIdentifiers;
- (id)configuredPartitionsIdentifiersAtIndex:(unsigned long long)a0;
- (unsigned long long)configuredPartitionsIdentifiersCount;

@end
