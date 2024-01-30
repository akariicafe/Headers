@class NSDictionary, NSMutableArray, NSString;

@interface ACProtobufAccountCredential : PBCodable <NSCopying>

@property (copy, nonatomic) NSDictionary *credentialItemsDictionary;
@property (retain, nonatomic) NSMutableArray *credentialItems;
@property (retain, nonatomic) NSString *credentialType;
@property (retain, nonatomic) NSMutableArray *dirtyProperties;
@property (nonatomic) BOOL requiresTouchID;

+ (Class)dirtyPropertiesType;
+ (Class)credentialItemsType;

- (void)clearDirtyProperties;
- (unsigned long long)dirtyPropertiesCount;
- (void)clearCredentialItems;
- (unsigned long long)credentialItemsCount;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void)addDirtyProperties:(id)a0;
- (id)dirtyPropertiesAtIndex:(unsigned long long)a0;
- (id)credentialItemsAtIndex:(unsigned long long)a0;
- (void)addCredentialItems:(id)a0;
- (void)mergeFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)copyTo:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
