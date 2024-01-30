@class NSData, USOSchemaUSOEdgeLabel;

@interface USOSchemaUSOEdge : SISchemaInstrumentationMessage {
    struct { unsigned char fromIndex : 1; unsigned char toIndex : 1; } _has;
}

@property (nonatomic) unsigned int fromIndex;
@property (nonatomic) BOOL hasFromIndex;
@property (nonatomic) unsigned int toIndex;
@property (nonatomic) BOOL hasToIndex;
@property (retain, nonatomic) USOSchemaUSOEdgeLabel *label;
@property (nonatomic) BOOL hasLabel;
@property (readonly, nonatomic) NSData *jsonData;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
