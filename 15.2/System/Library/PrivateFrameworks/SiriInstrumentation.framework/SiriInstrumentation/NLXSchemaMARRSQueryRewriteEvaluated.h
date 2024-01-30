@class NSArray, NSData, SISchemaUUID;

@interface NLXSchemaMARRSQueryRewriteEvaluated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *queryRewriteHypotheses;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addQueryRewriteHypotheses:(id)a0;
- (void)clearQueryRewriteHypotheses;
- (unsigned long long)queryRewriteHypothesesCount;
- (id)queryRewriteHypothesesAtIndex:(unsigned long long)a0;

@end
