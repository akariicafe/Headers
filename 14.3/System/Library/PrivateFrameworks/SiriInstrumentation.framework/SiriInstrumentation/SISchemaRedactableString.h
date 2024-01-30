@class NSString, NSData;

@interface SISchemaRedactableString : PBCodable

@property (nonatomic) int redactionState;
@property (nonatomic) BOOL hasRedactionState;
@property (copy, nonatomic) NSString *value;
@property (nonatomic) BOOL hasValue;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long which_String;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)a0;

@end
