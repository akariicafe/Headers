@class GRRSchemaGRRClientEventMetadata, GRRSchemaGRRFeatureExtractionContext, NSData, GRRSchemaGRRSystemErrorOccurred, GRRSchemaGRRHypothesisRankingContext;

@interface GRRSchemaGRRClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) GRRSchemaGRRClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) GRRSchemaGRRFeatureExtractionContext *featureExtractionContext;
@property (nonatomic) BOOL hasFeatureExtractionContext;
@property (retain, nonatomic) GRRSchemaGRRHypothesisRankingContext *hypothesisRankingContext;
@property (nonatomic) BOOL hasHypothesisRankingContext;
@property (retain, nonatomic) GRRSchemaGRRSystemErrorOccurred *systemErrorOccurred;
@property (nonatomic) BOOL hasSystemErrorOccurred;
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
