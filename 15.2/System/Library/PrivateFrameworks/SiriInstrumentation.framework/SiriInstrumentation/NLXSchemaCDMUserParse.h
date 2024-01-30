@class NLXSchemaCDMRepetitionResult, NSArray, NSData, SISchemaUUID, NLXSchemaCDMParser;

@interface NLXSchemaCDMUserParse : SISchemaInstrumentationMessage {
    struct { unsigned char probability : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *id;
@property (nonatomic) BOOL hasId;
@property (copy, nonatomic) NSArray *userDialogActs;
@property (nonatomic) double probability;
@property (nonatomic) BOOL hasProbability;
@property (retain, nonatomic) NLXSchemaCDMRepetitionResult *repetitionResult;
@property (nonatomic) BOOL hasRepetitionResult;
@property (retain, nonatomic) NLXSchemaCDMParser *parser;
@property (nonatomic) BOOL hasParser;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addUserDialogActs:(id)a0;
- (void)clearUserDialogActs;
- (unsigned long long)userDialogActsCount;
- (id)userDialogActsAtIndex:(unsigned long long)a0;

@end
