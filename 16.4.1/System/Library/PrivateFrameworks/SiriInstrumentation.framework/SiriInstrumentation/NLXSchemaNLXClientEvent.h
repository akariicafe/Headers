@class NLXSchemaNLXCurareContext, NLXSchemaNLXDeviceFixedContext, SISchemaInstrumentationMessage, NLXSchemaCDMSingleServiceSetupAttemptFailed, NLXSchemaCDMXPCEventProcessingContext, NLXSchemaMARRSQueryRewriteContext, NLXSchemaCDMSystemDialogActTier1, NLXSchemaCDMMatchingSpanEnded, NLXSchemaMARRSMentionResolverEnded, NLXSchemaMARRSMentionDetectorEnded, NLXSchemaCDMMatchingSpanEndedTier1, NLXSchemaMARRSQueryRewriteEvaluatedTier1, NLXSchemaCDMRequestContext, NLXSchemaCDMAllServicesSetupContext, NLXSchemaCDMSpanMatcherContext, NLXSchemaCDMClientSetupContext, NLXSchemaMARRSContextualSpanMatcherEnded, NLXSchemaCDMMatchingSpanTier1, NLXSchemaMARRSRepetitionDetectionContext, NLXSchemaCDMContextUpdateEnded, NLXSchemaNLXLegacyNLContextTier1, NSData, NLXSchemaCDMServiceContext, NLXSchemaCDMAssetSetupContext, NLXSchemaMARRSContextualSpanMatcherEndedTier1, NLXSchemaNLXClientEventMetadata, NLXSchemaCDMDelegatedUserDialogActTier1, NLXSchemaCDMSingleServiceSetupAttemptContext, NLXSchemaMARRSMentionResolverEndedTier1, NLXSchemaCDMTokenizationEnded, NLXSchemaCDMUsoGraphTier1, NLXSchemaMARRSMentionDetectorEndedTier1, NLXSchemaCDMSetupMissingAssetsDetected;

@interface NLXSchemaNLXClientEvent : SISchemaTopLevelUnionType <SISchemaInnerEventContainer>

@property (readonly, nonatomic) SISchemaInstrumentationMessage *innerEvent;
@property (retain, nonatomic) NLXSchemaNLXClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) NLXSchemaCDMServiceContext *cdmServiceContext;
@property (nonatomic) BOOL hasCdmServiceContext;
@property (retain, nonatomic) NLXSchemaCDMRequestContext *cdmRequestContext;
@property (nonatomic) BOOL hasCdmRequestContext;
@property (retain, nonatomic) NLXSchemaNLXDeviceFixedContext *nlxDeviceFixedContext;
@property (nonatomic) BOOL hasNlxDeviceFixedContext;
@property (retain, nonatomic) NLXSchemaCDMMatchingSpanEnded *cdmMatchingSpanEnded;
@property (nonatomic) BOOL hasCdmMatchingSpanEnded;
@property (retain, nonatomic) NLXSchemaCDMUsoGraphTier1 *cdmUsoGraphTier1;
@property (nonatomic) BOOL hasCdmUsoGraphTier1;
@property (retain, nonatomic) NLXSchemaCDMMatchingSpanTier1 *cdmMatchingSpanTier1;
@property (nonatomic) BOOL hasCdmMatchingSpanTier1;
@property (retain, nonatomic) NLXSchemaNLXLegacyNLContextTier1 *nlxLegacyNLContextTier1;
@property (nonatomic) BOOL hasNlxLegacyNLContextTier1;
@property (retain, nonatomic) NLXSchemaCDMDelegatedUserDialogActTier1 *cdmDelegatedUserDialogActTier1;
@property (nonatomic) BOOL hasCdmDelegatedUserDialogActTier1;
@property (retain, nonatomic) NLXSchemaCDMSystemDialogActTier1 *cdmSystemDialogActTier1;
@property (nonatomic) BOOL hasCdmSystemDialogActTier1;
@property (retain, nonatomic) NLXSchemaCDMTokenizationEnded *cdmTokenizationEnded;
@property (nonatomic) BOOL hasCdmTokenizationEnded;
@property (retain, nonatomic) NLXSchemaCDMContextUpdateEnded *cdmContextUpdateEnded;
@property (nonatomic) BOOL hasCdmContextUpdateEnded;
@property (retain, nonatomic) NLXSchemaMARRSRepetitionDetectionContext *marrsRepetitionDetectionContext;
@property (nonatomic) BOOL hasMarrsRepetitionDetectionContext;
@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteContext *marrsQueryRewriteContext;
@property (nonatomic) BOOL hasMarrsQueryRewriteContext;
@property (retain, nonatomic) NLXSchemaMARRSQueryRewriteEvaluatedTier1 *marrsQueryRewriteEvaluatedTier1;
@property (nonatomic) BOOL hasMarrsQueryRewriteEvaluatedTier1;
@property (retain, nonatomic) NLXSchemaCDMMatchingSpanEndedTier1 *cdmMatchingSpanEndedTier1;
@property (nonatomic) BOOL hasCdmMatchingSpanEndedTier1;
@property (retain, nonatomic) NLXSchemaNLXCurareContext *nlxCurareContext;
@property (nonatomic) BOOL hasNlxCurareContext;
@property (retain, nonatomic) NLXSchemaMARRSMentionDetectorEnded *marrsMentionDetectorEnded;
@property (nonatomic) BOOL hasMarrsMentionDetectorEnded;
@property (retain, nonatomic) NLXSchemaMARRSMentionDetectorEndedTier1 *marrsMentionDetectorEndedTier1;
@property (nonatomic) BOOL hasMarrsMentionDetectorEndedTier1;
@property (retain, nonatomic) NLXSchemaMARRSMentionResolverEnded *marrsMentionResolverEnded;
@property (nonatomic) BOOL hasMarrsMentionResolverEnded;
@property (retain, nonatomic) NLXSchemaMARRSMentionResolverEndedTier1 *marrsMentionResolverEndedTier1;
@property (nonatomic) BOOL hasMarrsMentionResolverEndedTier1;
@property (retain, nonatomic) NLXSchemaCDMClientSetupContext *cdmClientSetupContext;
@property (nonatomic) BOOL hasCdmClientSetupContext;
@property (retain, nonatomic) NLXSchemaCDMAllServicesSetupContext *cdmAllServicesSetupContext;
@property (nonatomic) BOOL hasCdmAllServicesSetupContext;
@property (retain, nonatomic) NLXSchemaCDMSingleServiceSetupAttemptContext *cdmSingleServiceSetupAttemptContext;
@property (nonatomic) BOOL hasCdmSingleServiceSetupAttemptContext;
@property (retain, nonatomic) NLXSchemaCDMSingleServiceSetupAttemptFailed *cdmSingleServiceSetupAttemptFailed;
@property (nonatomic) BOOL hasCdmSingleServiceSetupAttemptFailed;
@property (retain, nonatomic) NLXSchemaCDMSpanMatcherContext *cdmSpanMatcherContext;
@property (nonatomic) BOOL hasCdmSpanMatcherContext;
@property (retain, nonatomic) NLXSchemaMARRSContextualSpanMatcherEnded *marrsContextualSpanMatcherEnded;
@property (nonatomic) BOOL hasMarrsContextualSpanMatcherEnded;
@property (retain, nonatomic) NLXSchemaMARRSContextualSpanMatcherEndedTier1 *marrsContextualSpanMatcherEndedTier1;
@property (nonatomic) BOOL hasMarrsContextualSpanMatcherEndedTier1;
@property (retain, nonatomic) NLXSchemaCDMXPCEventProcessingContext *cdmXpcEventProcessingContext;
@property (nonatomic) BOOL hasCdmXpcEventProcessingContext;
@property (retain, nonatomic) NLXSchemaCDMAssetSetupContext *cdmAssetSetupContext;
@property (nonatomic) BOOL hasCdmAssetSetupContext;
@property (retain, nonatomic) NLXSchemaCDMSetupMissingAssetsDetected *cdmSetupMissingAssetsDetected;
@property (nonatomic) BOOL hasCdmSetupMissingAssetsDetected;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly, nonatomic) unsigned long long whichEvent_Type;

+ (int)joinability;

- (int)componentName;
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
- (void)deleteMarrsMentionResolverEnded;
- (void)deleteCdmMatchingSpanEndedTier1;
- (void)deleteMarrsMentionDetectorEnded;
- (void)deleteCdmAllServicesSetupContext;
- (void)deleteCdmAssetSetupContext;
- (void)deleteCdmClientSetupContext;
- (void)deleteCdmContextUpdateEnded;
- (void)deleteCdmDelegatedUserDialogActTier1;
- (void)deleteCdmMatchingSpanEnded;
- (void)deleteCdmMatchingSpanTier1;
- (void)deleteCdmRequestContext;
- (void)deleteCdmServiceContext;
- (void)deleteCdmSetupMissingAssetsDetected;
- (void)deleteCdmSingleServiceSetupAttemptContext;
- (void)deleteCdmSingleServiceSetupAttemptFailed;
- (void)deleteCdmSpanMatcherContext;
- (void)deleteCdmSystemDialogActTier1;
- (void)deleteCdmTokenizationEnded;
- (void)deleteCdmUsoGraphTier1;
- (void)deleteCdmXpcEventProcessingContext;
- (void)deleteEventMetadata;
- (void)deleteMarrsContextualSpanMatcherEnded;
- (void)deleteMarrsContextualSpanMatcherEndedTier1;
- (void)deleteMarrsMentionDetectorEndedTier1;
- (void)deleteMarrsMentionResolverEndedTier1;
- (void)deleteMarrsQueryRewriteContext;
- (void)deleteMarrsQueryRewriteEvaluatedTier1;
- (void)deleteMarrsRepetitionDetectionContext;
- (void)deleteNlxCurareContext;
- (void)deleteNlxDeviceFixedContext;
- (void)deleteNlxLegacyNLContextTier1;
- (id)getComponentId;

@end
