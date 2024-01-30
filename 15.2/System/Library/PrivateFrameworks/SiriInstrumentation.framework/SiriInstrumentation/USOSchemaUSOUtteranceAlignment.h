@class NSArray, NSData;

@interface USOSchemaUSOUtteranceAlignment : SISchemaInstrumentationMessage {
    struct { unsigned char asrHypothesisIndex : 1; unsigned char nodeIndex : 1; } _has;
}

@property (nonatomic) unsigned int asrHypothesisIndex;
@property (nonatomic) BOOL hasAsrHypothesisIndex;
@property (copy, nonatomic) NSArray *spans;
@property (nonatomic) unsigned int nodeIndex;
@property (nonatomic) BOOL hasNodeIndex;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)spansCount;
- (void)clearSpans;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addSpans:(id)a0;
- (id)spansAtIndex:(unsigned long long)a0;

@end
