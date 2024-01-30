@class ORCHSchemaORCHDeviceDynamicContext, ORCHSchemaORCHServerFallbackContext, ORCHSchemaORCHClientEventMetadata, ORCHSchemaORCHASRBridgeContext, ORCHSchemaORCHResultSelected, ORCHSchemaORCHRequestContext, ORCHSchemaORCHResourceUtilizationMetadata, ORCHSchemaORCHCDMBridgeContext, ORCHSchemaORCHAssetsReported, ORCHSchemaORCHExecutionBridgeContext, ORCHSchemaORCHPommesBridgeContext, ORCHSchemaORCHConversationContextSubmitted, ORCHSchemaORCHResultCandidateReceived, NSData, ORCHSchemaORCHFlowOutputSubmitted;

@interface ORCHSchemaORCHClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) ORCHSchemaORCHClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) ORCHSchemaORCHResourceUtilizationMetadata *resourceUtilizationMetadata;
@property (nonatomic) BOOL hasResourceUtilizationMetadata;
@property (retain, nonatomic) ORCHSchemaORCHRequestContext *requestContext;
@property (nonatomic) BOOL hasRequestContext;
@property (retain, nonatomic) ORCHSchemaORCHASRBridgeContext *asrBridgeContext;
@property (nonatomic) BOOL hasAsrBridgeContext;
@property (retain, nonatomic) ORCHSchemaORCHCDMBridgeContext *cdmBridgeContext;
@property (nonatomic) BOOL hasCdmBridgeContext;
@property (retain, nonatomic) ORCHSchemaORCHExecutionBridgeContext *executionBridgeContext;
@property (nonatomic) BOOL hasExecutionBridgeContext;
@property (retain, nonatomic) ORCHSchemaORCHServerFallbackContext *serverFallbackContext;
@property (nonatomic) BOOL hasServerFallbackContext;
@property (retain, nonatomic) ORCHSchemaORCHFlowOutputSubmitted *flowOutputSubmitted;
@property (nonatomic) BOOL hasFlowOutputSubmitted;
@property (retain, nonatomic) ORCHSchemaORCHResultCandidateReceived *resultCandidate;
@property (nonatomic) BOOL hasResultCandidate;
@property (retain, nonatomic) ORCHSchemaORCHResultSelected *resultSelected;
@property (nonatomic) BOOL hasResultSelected;
@property (retain, nonatomic) ORCHSchemaORCHConversationContextSubmitted *contextSubmissionMessage;
@property (nonatomic) BOOL hasContextSubmissionMessage;
@property (retain, nonatomic) ORCHSchemaORCHAssetsReported *availableAssets;
@property (nonatomic) BOOL hasAvailableAssets;
@property (retain, nonatomic) ORCHSchemaORCHDeviceDynamicContext *orchDeviceDynamicContext;
@property (nonatomic) BOOL hasOrchDeviceDynamicContext;
@property (retain, nonatomic) ORCHSchemaORCHPommesBridgeContext *pommesBridgeContext;
@property (nonatomic) BOOL hasPommesBridgeContext;
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
