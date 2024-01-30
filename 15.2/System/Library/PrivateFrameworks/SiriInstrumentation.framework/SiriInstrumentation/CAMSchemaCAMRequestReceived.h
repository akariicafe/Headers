@class NSArray, NSData;

@interface CAMSchemaCAMRequestReceived : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *features;
@property (readonly, nonatomic) NSData *jsonData;

- (id)featureAtIndex:(unsigned long long)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (unsigned long long)featureCount;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addFeature:(id)a0;
- (void)clearFeature;

@end
