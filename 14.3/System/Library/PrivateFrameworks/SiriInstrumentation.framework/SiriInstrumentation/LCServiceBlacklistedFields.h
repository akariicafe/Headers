@class NSArray, NSData;

@interface LCServiceBlacklistedFields : PBCodable

@property (copy, nonatomic) NSArray *blackListedFields;
@property (readonly, nonatomic) NSData *jsonData;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;
- (void)addBlackListedFields:(id)a0;
- (void)clearBlackListedFields;
- (unsigned long long)blackListedFieldsCount;
- (id)blackListedFieldsAtIndex:(unsigned long long)a0;

@end
