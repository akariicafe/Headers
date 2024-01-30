@class NSArray, NSString, NSData;

@interface FLOWSchemaFLOWKGQAExecution : SISchemaInstrumentationMessage {
    struct { unsigned char kgQAUsecase : 1; unsigned char isDisputedResponse : 1; unsigned char isWebExtractedFact : 1; } _has;
}

@property (nonatomic) int kgQAUsecase;
@property (nonatomic) BOOL hasKgQAUsecase;
@property (copy, nonatomic) NSArray *attributes;
@property (nonatomic) BOOL isDisputedResponse;
@property (nonatomic) BOOL hasIsDisputedResponse;
@property (copy, nonatomic) NSString *nlgKey;
@property (nonatomic) BOOL hasNlgKey;
@property (nonatomic) BOOL isWebExtractedFact;
@property (nonatomic) BOOL hasIsWebExtractedFact;
@property (readonly, nonatomic) NSData *jsonData;

- (void)clearAttributes;
- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (unsigned long long)attributesCount;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addAttributes:(id)a0;
- (id)attributesAtIndex:(unsigned long long)a0;
- (void)deleteAttributes;
- (void)deleteIsDisputedResponse;
- (void)deleteIsWebExtractedFact;
- (void)deleteKgQAUsecase;
- (void)deleteNlgKey;

@end
