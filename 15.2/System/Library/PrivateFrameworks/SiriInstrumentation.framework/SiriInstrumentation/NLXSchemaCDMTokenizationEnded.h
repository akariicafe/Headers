@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaCDMTokenizationEnded : SISchemaInstrumentationMessage {
    struct { unsigned char inputType : 1; } _has;
}

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (copy, nonatomic) NSArray *tokenChains;
@property (nonatomic) int inputType;
@property (nonatomic) BOOL hasInputType;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addTokenChains:(id)a0;
- (void)clearTokenChains;
- (unsigned long long)tokenChainsCount;
- (id)tokenChainsAtIndex:(unsigned long long)a0;

@end
