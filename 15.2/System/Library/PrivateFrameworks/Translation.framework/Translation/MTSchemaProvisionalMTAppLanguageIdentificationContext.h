@class MTSchemaProvisionalMTAppLanguageIdentificationEnded, MTSchemaProvisionalMTAppLanguageIdentificationFailed, MTSchemaProvisionalMTAppLanguageIdentificationCancelled, NSData, MTSchemaProvisionalMTAppLanguageIdentificationStarted;

@interface MTSchemaProvisionalMTAppLanguageIdentificationContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) MTSchemaProvisionalMTAppLanguageIdentificationStarted *started;
@property (nonatomic) BOOL hasStarted;
@property (retain, nonatomic) MTSchemaProvisionalMTAppLanguageIdentificationEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) MTSchemaProvisionalMTAppLanguageIdentificationFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) MTSchemaProvisionalMTAppLanguageIdentificationCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
