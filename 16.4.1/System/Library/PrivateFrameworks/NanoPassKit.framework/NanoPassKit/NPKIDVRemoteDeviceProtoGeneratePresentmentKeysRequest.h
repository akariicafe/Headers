@class NSString, NSMutableArray;

@interface NPKIDVRemoteDeviceProtoGeneratePresentmentKeysRequest : PBRequest <NSCopying> {
    struct { unsigned char numKeys : 1; } _has;
}

@property (readonly, nonatomic) BOOL hasCredentialIdentifier;
@property (retain, nonatomic) NSString *credentialIdentifier;
@property (retain, nonatomic) NSMutableArray *configuredPartitionsIdentifiers;
@property (nonatomic) BOOL hasNumKeys;
@property (nonatomic) unsigned int numKeys;

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
