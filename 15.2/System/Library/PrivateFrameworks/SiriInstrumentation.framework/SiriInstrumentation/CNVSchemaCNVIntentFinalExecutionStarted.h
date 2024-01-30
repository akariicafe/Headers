@class NSData;

@interface CNVSchemaCNVIntentFinalExecutionStarted : SISchemaInstrumentationMessage {
    struct { unsigned char plugin : 1; unsigned char stackDepth : 1; } _has;
}

@property (nonatomic) int plugin;
@property (nonatomic) BOOL hasPlugin;
@property (nonatomic) unsigned int stackDepth;
@property (nonatomic) BOOL hasStackDepth;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
