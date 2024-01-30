@class NSString, NSData;

@interface NPKIDVRemoteDeviceProtoCreateCredentialRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPartitionIdentifier;
@property (retain, nonatomic) NSString *partitionIdentifier;
@property (readonly, nonatomic) BOOL hasCredentialOptionsData;
@property (retain, nonatomic) NSData *credentialOptionsData;

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
