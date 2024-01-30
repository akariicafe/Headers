@class NLXSchemaCDMServiceContext, NLXSchemaCDMTokenizationEnded, NLXSchemaCDMMatchingSpanTier1, NLXSchemaCDMDelegatedUserDialogActTier1, NLXSchemaCDMSystemDialogActTier1, NLXSchemaCDMContextUpdateEnded, NLXSchemaMARRSQueryRewriteContext, NLXSchemaCDMMatchingSpanEndedTier1, NLXSchemaNLXLegacyNLContextTier1, NLXSchemaNLXClientEventMetadata, NLXSchemaCDMUsoGraphTier1, NLXSchemaMARRSQueryRewriteEvaluatedTier1, NLXSchemaCDMMatchingSpanEnded, NLXSchemaNLXCurareContext, NLXSchemaCDMRequestContext, NSData, NLXSchemaNLXDeviceFixedContext, NLXSchemaMARRSRepetitionDetectionContext;

@interface NLXSchemaNLXClientEvent : SISchemaTopLevelUnionType

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
