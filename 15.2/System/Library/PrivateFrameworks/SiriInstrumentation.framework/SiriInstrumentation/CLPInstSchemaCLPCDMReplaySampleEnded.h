@class NSArray, NSData;

@interface CLPInstSchemaCLPCDMReplaySampleEnded : SISchemaInstrumentationMessage {
    struct { unsigned char isReplaySuccessful : 1; } _has;
}

@property (nonatomic) BOOL isReplaySuccessful;
@property (nonatomic) BOOL hasIsReplaySuccessful;
@property (copy, nonatomic) NSArray *comparatorResults;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addComparatorResults:(id)a0;
- (void)clearComparatorResults;
- (unsigned long long)comparatorResultsCount;
- (id)comparatorResultsAtIndex:(unsigned long long)a0;

@end
