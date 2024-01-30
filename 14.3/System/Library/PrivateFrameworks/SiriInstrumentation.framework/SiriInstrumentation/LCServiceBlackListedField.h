@class NSString, NSData;

@interface LCServiceBlackListedField : PBCodable

@property (copy, nonatomic) NSString *fullyQualifiedPath;
@property (nonatomic) BOOL hasFullyQualifiedPath;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
