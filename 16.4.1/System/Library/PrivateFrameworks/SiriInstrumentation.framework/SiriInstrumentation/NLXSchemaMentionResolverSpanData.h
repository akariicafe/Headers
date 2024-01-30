@class NSData;

@interface NLXSchemaMentionResolverSpanData : SISchemaInstrumentationMessage {
    struct { unsigned char jointScore : 1; unsigned char modelScore : 1; } _has;
}

@property (nonatomic) double jointScore;
@property (nonatomic) BOOL hasJointScore;
@property (nonatomic) double modelScore;
@property (nonatomic) BOOL hasModelScore;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteJointScore;
- (void)deleteModelScore;

@end
