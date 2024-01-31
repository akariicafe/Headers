@class NSDictionary, NSMutableArray, NSString;

@interface ACProtobufAccountCredential : PBCodable <NSCopying>

@property (copy, nonatomic) NSDictionary *credentialItemsDictionary;
@property (retain, nonatomic) NSMutableArray *credentialItems;
@property (retain, nonatomic) NSString *credentialType;
@property (retain, nonatomic) NSMutableArray *dirtyProperties;
@property (nonatomic) BOOL requiresTouchID;

+ (Class)credentialItemsType;
+ (Class)dirtyPropertiesType;

- (unsigned long long)hash;
- (BOOL)readFrom:(id)a0;
- (void)clearDirtyProperties;
- (void)writeTo:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (void)copyTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)mergeFrom:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)addCredentialItems:(id)a0;
- (void)addDirtyProperties:(id)a0;
- (void)clearCredentialItems;
- (id)credentialItemsAtIndex:(unsigned long long)a0;
- (unsigned long long)credentialItemsCount;
- (id)dirtyPropertiesAtIndex:(unsigned long long)a0;
- (unsigned long long)dirtyPropertiesCount;

@end
