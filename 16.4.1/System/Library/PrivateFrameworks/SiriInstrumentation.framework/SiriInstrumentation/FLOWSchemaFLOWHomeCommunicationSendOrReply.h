@class NSArray, NSData;

@interface FLOWSchemaFLOWHomeCommunicationSendOrReply : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *targetTypes;
@property (readonly, nonatomic) NSData *jsonData;

- (id)suppressMessageUnderConditions;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)clearTargetType;
- (unsigned long long)targetTypeCount;
- (void)addTargetType:(int)a0;
- (void)deleteTargetType;
- (int)targetTypeAtIndex:(unsigned long long)a0;

@end
