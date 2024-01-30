@class NSData, USPSchemaUSPLoggingInitalized, USPSchemaUSPMeasureStarted, USPSchemaUSPClientEventMetadata, USPSchemaUSPIterationEnded, USPSchemaUSPMeasureEnded, USPSchemaUSPLoggingReported, USPSchemaUSPIterationStarted;

@interface USPSchemaUSPClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) USPSchemaUSPClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) USPSchemaUSPLoggingInitalized *loggingInitialized;
@property (nonatomic) BOOL hasLoggingInitialized;
@property (retain, nonatomic) USPSchemaUSPLoggingReported *loggingReported;
@property (nonatomic) BOOL hasLoggingReported;
@property (retain, nonatomic) USPSchemaUSPMeasureStarted *measureStarted;
@property (nonatomic) BOOL hasMeasureStarted;
@property (retain, nonatomic) USPSchemaUSPMeasureEnded *measureEnded;
@property (nonatomic) BOOL hasMeasureEnded;
@property (retain, nonatomic) USPSchemaUSPIterationStarted *iterationStarted;
@property (nonatomic) BOOL hasIterationStarted;
@property (retain, nonatomic) USPSchemaUSPIterationEnded *iterationEnded;
@property (nonatomic) BOOL hasIterationEnded;
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
