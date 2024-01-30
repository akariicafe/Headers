@class NSString, NSMutableArray;

@interface NPKProtoHandleCredentialsChangeRequest : PBRequest <NSCopying>

@property (readonly, nonatomic) BOOL hasPassID;
@property (retain, nonatomic) NSString *passID;
@property (retain, nonatomic) NSMutableArray *credentialsBytes;

+ (Class)credentialsBytesType;

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
- (void)addCredentialsBytes:(id)a0;
- (void)clearCredentialsBytes;
- (id)credentialsBytesAtIndex:(unsigned long long)a0;
- (unsigned long long)credentialsBytesCount;

@end
