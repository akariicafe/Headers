@class NSData, USOSchemaUSOGraph;

@interface CNVSchemaCNVIntentReformationEnded : SISchemaInstrumentationMessage

@property (retain, nonatomic) USOSchemaUSOGraph *reformedIntent;
@property (nonatomic) BOOL hasReformedIntent;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
