@class NSString, NSData;

@interface SISchemaTextToSpeechEnd : PBCodable

@property (copy, nonatomic) NSString *aceID;
@property (nonatomic) BOOL hasAceID;
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
