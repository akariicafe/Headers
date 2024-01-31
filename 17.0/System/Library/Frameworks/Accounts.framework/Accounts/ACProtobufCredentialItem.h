@class NSString, ACProtobufDate, NSMutableArray, ACProtobufURL;

@interface ACProtobufCredentialItem : PBCodable <NSCopying> {
    struct { unsigned char isPersistent : 1; } _has;
}

@property (retain, nonatomic) NSString *accountIdentifier;
@property (readonly, nonatomic) BOOL hasExpirationDate;
@property (retain, nonatomic) ACProtobufDate *expirationDate;
@property (retain, nonatomic) NSString *serviceName;
@property (nonatomic) BOOL hasIsPersistent;
@property (nonatomic) BOOL isPersistent;
@property (readonly, nonatomic) BOOL hasObjectID;
@property (retain, nonatomic) ACProtobufURL *objectID;
@property (retain, nonatomic) NSMutableArray *dirtyProperties;

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
- (void)addDirtyProperties:(id)a0;
- (id)dirtyPropertiesAtIndex:(unsigned long long)a0;
- (unsigned long long)dirtyPropertiesCount;

@end
