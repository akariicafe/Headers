@class NSArray, NSData;

@interface RRSchemaRREntityPoolResolveEnded : SISchemaInstrumentationMessage {
    struct { unsigned char outcome : 1; } _has;
}

@property (copy, nonatomic) NSArray *queryResults;
@property (nonatomic) int outcome;
@property (nonatomic) BOOL hasOutcome;
@property (readonly, nonatomic) NSData *jsonData;

- (void)addQueryResults:(id)a0;
- (void)clearQueryResults;
- (BOOL)readFrom:(id)a0;
- (unsigned long long)queryResultsCount;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)queryResultsAtIndex:(unsigned long long)a0;
- (id)dictionaryRepresentation;

@end
