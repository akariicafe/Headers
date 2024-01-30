@class NSData;

@interface CNVSchemaCNVIntentReformationStarted : SISchemaInstrumentationMessage {
    struct { unsigned char transformer : 1; unsigned char targetPlugin : 1; } _has;
}

@property (nonatomic) int transformer;
@property (nonatomic) BOOL hasTransformer;
@property (nonatomic) int targetPlugin;
@property (nonatomic) BOOL hasTargetPlugin;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteTargetPlugin;
- (void)deleteTransformer;

@end
