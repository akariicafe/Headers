@class NSArray, GRPSchemaGroupedMessagesGrouping, NSData, GRPSchemaProducerMetadata;

@interface GRPSchemaGroupedMessagesClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) GRPSchemaGroupedMessagesGrouping *groupedBy;
@property (nonatomic) BOOL hasGroupedBy;
@property (retain, nonatomic) GRPSchemaProducerMetadata *producerMetadata;
@property (nonatomic) BOOL hasProducerMetadata;
@property (copy, nonatomic) NSArray *orderedMessages;
@property (readonly, nonatomic) NSData *jsonData;

- (int)getAnyEventType;
- (id)suppressMessageUnderConditions;
- (id)qualifiedMessageName;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (id)applySensitiveConditionsPolicy:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)deleteGroupedBy;
- (void)addOrderedMessages:(id)a0;
- (void)clearOrderedMessages;
- (void)deleteOrderedMessages;
- (void)deleteProducerMetadata;
- (id)orderedMessagesAtIndex:(unsigned long long)a0;
- (unsigned long long)orderedMessagesCount;

@end
