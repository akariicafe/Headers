@class RRSchemaRREntityPoolResolveContext, RRSchemaRREntityPoolReturned, RRSchemaRRUsoGraphTier1, NSData, RRSchemaRRClientEventMetadata;

@interface RRSchemaRRClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) RRSchemaRRClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) RRSchemaRREntityPoolReturned *entityPoolReturned;
@property (nonatomic) BOOL hasEntityPoolReturned;
@property (retain, nonatomic) RRSchemaRREntityPoolResolveContext *entityPoolResolveContext;
@property (nonatomic) BOOL hasEntityPoolResolveContext;
@property (retain, nonatomic) RRSchemaRRUsoGraphTier1 *rrUsoGraphTier1;
@property (nonatomic) BOOL hasRrUsoGraphTier1;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

- (BOOL)readFrom:(id)a0;
- (id)qualifiedMessageName;
- (int)getAnyEventType;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
