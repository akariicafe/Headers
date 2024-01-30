@class PLUSSchemaPLUSPhoneCallMetadataExtracted, PLUSSchemaPLUSContactSuggesterSuggestionMetadataReported, PLUSSchemaPLUSUSOGraphTier1, NSData, PLUSSchemaPLUSContactSuggesterQueryContext, PLUSSchemaPLUSContactSuggesterRequestMetadataReported, PLUSSchemaPLUSContactSuggestionGenerated, PLUSSchemaPLUSClientEventMetadata, PLUSSchemaPLUSInferencePluginInvocationContext, PLUSSchemaPLUSContactSuggestionOutcomeReported, PLUSSchemaPLUSContactGroundTruthGenerated;

@interface PLUSSchemaPLUSClientEvent : SISchemaTopLevelUnionType

@property (retain, nonatomic) PLUSSchemaPLUSClientEventMetadata *eventMetadata;
@property (nonatomic) BOOL hasEventMetadata;
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggesterQueryContext *contactSuggesterQueryContext;
@property (nonatomic) BOOL hasContactSuggesterQueryContext;
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestionOutcomeReported *contactSuggestionOutcomeReported;
@property (nonatomic) BOOL hasContactSuggestionOutcomeReported;
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggesterRequestMetadataReported *contactSuggesterRequestMetadataReported;
@property (nonatomic) BOOL hasContactSuggesterRequestMetadataReported;
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggesterSuggestionMetadataReported *contactSuggesterSuggestionMetadataReported;
@property (nonatomic) BOOL hasContactSuggesterSuggestionMetadataReported;
@property (retain, nonatomic) PLUSSchemaPLUSUSOGraphTier1 *usoGraphTier1;
@property (nonatomic) BOOL hasUsoGraphTier1;
@property (retain, nonatomic) PLUSSchemaPLUSInferencePluginInvocationContext *inferencePluginInvocationContext;
@property (nonatomic) BOOL hasInferencePluginInvocationContext;
@property (retain, nonatomic) PLUSSchemaPLUSContactGroundTruthGenerated *contactGroundTruthGenerated;
@property (nonatomic) BOOL hasContactGroundTruthGenerated;
@property (retain, nonatomic) PLUSSchemaPLUSContactSuggestionGenerated *contactSuggestionGenerated;
@property (nonatomic) BOOL hasContactSuggestionGenerated;
@property (retain, nonatomic) PLUSSchemaPLUSPhoneCallMetadataExtracted *phoneCallMetadataExtracted;
@property (nonatomic) BOOL hasPhoneCallMetadataExtracted;
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
