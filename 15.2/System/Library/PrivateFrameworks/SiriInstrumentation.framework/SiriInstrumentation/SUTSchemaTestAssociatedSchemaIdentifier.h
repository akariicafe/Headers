@class NSData, SUTSchemaTestGeneratedTurnID, SUTSchemaTestGeneratedRequestId;

@interface SUTSchemaTestAssociatedSchemaIdentifier : SISchemaInstrumentationMessage

@property (retain, nonatomic) SUTSchemaTestGeneratedTurnID *turnID;
@property (nonatomic) BOOL hasTurnID;
@property (retain, nonatomic) SUTSchemaTestGeneratedRequestId *requestId;
@property (nonatomic) BOOL hasRequestId;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichIdentifier_Type;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
