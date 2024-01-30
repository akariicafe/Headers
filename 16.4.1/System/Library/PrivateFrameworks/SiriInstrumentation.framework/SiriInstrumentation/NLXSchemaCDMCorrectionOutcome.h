@class NSData;

@interface NLXSchemaCDMCorrectionOutcome : SISchemaInstrumentationMessage {
    struct { unsigned char correctionType : 1; } _has;
}

@property (nonatomic) int correctionType;
@property (nonatomic) BOOL hasCorrectionType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteCorrectionType;

@end
