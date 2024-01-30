@class NSString, USOSchemaUSOGraph, NSArray, SISchemaUUID, NLXSchemaCDMInternalSpanData, NSData;

@interface NLXSchemaCDMMatchingSpan : SISchemaInstrumentationMessage {
    struct { unsigned char startTokenIndex : 1; unsigned char endTokenIndex : 1; } _has;
}

@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL hasLabel;
@property (retain, nonatomic) SISchemaUUID *linkId;
@property (nonatomic) BOOL hasLinkId;
@property (nonatomic) unsigned int startTokenIndex;
@property (nonatomic) BOOL hasStartTokenIndex;
@property (nonatomic) unsigned int endTokenIndex;
@property (nonatomic) BOOL hasEndTokenIndex;
@property (retain, nonatomic) USOSchemaUSOGraph *usoGraph;
@property (nonatomic) BOOL hasUsoGraph;
@property (copy, nonatomic) NSArray *matcherNames;
@property (retain, nonatomic) NLXSchemaCDMInternalSpanData *internalSpanData;
@property (nonatomic) BOOL hasInternalSpanData;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;
- (void)addMatcherNames:(int)a0;
- (void)clearMatcherNames;
- (unsigned long long)matcherNamesCount;
- (int)matcherNamesAtIndex:(unsigned long long)a0;

@end
