@class MTSchemaProvisionalMTBatchRequestFailed, MTSchemaProvisionalMTBatchRequestStarted, MTSchemaProvisionalMTBatchRequestCancelled, MTSchemaProvisionalMTBatchRequestEnded, SISchemaUUID, NSData;

@interface MTSchemaProvisionalMTBatchRequestContext : SISchemaInstrumentationMessage

@property (retain, nonatomic) SISchemaUUID *contextId;
@property (nonatomic) BOOL hasContextId;
@property (retain, nonatomic) MTSchemaProvisionalMTBatchRequestStarted *startedOrChanged;
@property (nonatomic) BOOL hasStartedOrChanged;
@property (retain, nonatomic) MTSchemaProvisionalMTBatchRequestEnded *ended;
@property (nonatomic) BOOL hasEnded;
@property (retain, nonatomic) MTSchemaProvisionalMTBatchRequestFailed *failed;
@property (nonatomic) BOOL hasFailed;
@property (retain, nonatomic) MTSchemaProvisionalMTBatchRequestCancelled *cancelled;
@property (nonatomic) BOOL hasCancelled;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichContextevent;

- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithJSON:(id)a0;
- (void)writeTo:(id)a0;
- (id)initWithDictionary:(id)a0;
- (unsigned long long)hash;
- (id)dictionaryRepresentation;

@end
