@class NSData;

@interface NLXSchemaMARRSQueryRewriteHypothesis : SISchemaInstrumentationMessage {
    struct { unsigned char confidence : 1; unsigned char rewriteType : 1; } _has;
}

@property (nonatomic) double confidence;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) int rewriteType;
@property (nonatomic) BOOL hasRewriteType;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void)deleteConfidence;
- (void)deleteRewriteType;

@end
