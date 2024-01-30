@class NSString, NSData;

@interface CPMessagingMMCSMetadata : PBCodable <NSCopying>

@property (readonly, nonatomic) BOOL hasTransferUUID;
@property (retain, nonatomic) NSString *transferUUID;
@property (readonly, nonatomic) BOOL hasUrl;
@property (retain, nonatomic) NSString *url;
@property (readonly, nonatomic) BOOL hasOwnerID;
@property (retain, nonatomic) NSString *ownerID;
@property (readonly, nonatomic) BOOL hasEncryptionKey;
@property (retain, nonatomic) NSData *encryptionKey;
@property (readonly, nonatomic) BOOL hasSignature;
@property (retain, nonatomic) NSData *signature;

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
