@class NSString, NSMutableArray, NSData;

@interface PKProtobufShareableCredentialMessage : PBCodable <NSCopying>

@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSMutableArray *shareableCredentials;
@property (readonly, nonatomic) BOOL hasMessageCaption;
@property (retain, nonatomic) NSString *messageCaption;
@property (readonly, nonatomic) BOOL hasDataString;
@property (retain, nonatomic) NSString *dataString;
@property (readonly, nonatomic) BOOL hasPolicyIdentifier;
@property (retain, nonatomic) NSString *policyIdentifier;
@property (readonly, nonatomic) BOOL hasPassThumbnailImage;
@property (retain, nonatomic) NSData *passThumbnailImage;

+ (Class)shareableCredentialsType;

- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addShareableCredentials:(id)a0;
- (unsigned long long)shareableCredentialsCount;
- (void)clearShareableCredentials;
- (id)shareableCredentialsAtIndex:(unsigned long long)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
