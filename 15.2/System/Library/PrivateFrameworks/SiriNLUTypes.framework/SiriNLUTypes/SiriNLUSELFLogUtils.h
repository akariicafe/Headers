@interface SiriNLUSELFLogUtils : NSObject

+ (id)createNLXClientEventMetadataWithNlId:(id)a0 andWithResultCandidateId:(id)a1;
+ (id)createNLXRequestLinkWithTarget:(int)a0 andTargetId:(id)a1 metadata:(id)a2;
+ (id)createNLXCurareContext:(id)a0 metadata:(id)a1;
+ (id)createCDMRequestStartedLog:(id)a0 metadata:(id)a1;
+ (id)createCDMRequestEndedLog:(id)a0 metadata:(id)a1;
+ (id)createCDMRequestFailedLog:(int)a0 metadata:(id)a1;
+ (id)createCDMRequestFailedLog:(int)a0 originalCode:(long long)a1 metadata:(id)a2;
+ (id)createServiceContextStartedLog:(id)a0 serviceName:(int)a1 metadata:(id)a2;
+ (id)createServiceContextEndedLog:(id)a0 metadata:(id)a1;
+ (id)createServiceContextFailedLog:(id)a0 failureCode:(int)a1 metadata:(id)a2;
+ (id)createMatchingSpanEndedLog:(id)a0 spanMatchResponse:(id)a1 metadata:(id)a2;
+ (id)createTokenizationEndedLog:(id)a0 tokenizationResponse:(id)a1 tokenizationInputType:(int)a2 metadata:(id)a3;
+ (id)createContextUpdateEndedLog:(id)a0 contextUpdateResponse:(id)a1 metadata:(id)a2;
+ (id)convertSystemDialogAct:(id)a0;
+ (id)convertUserDialogAct:(id)a0;
+ (id)convertUsoGraph:(id)a0;
+ (id)convertUUID:(id)a0;
+ (id)convertTurnInput:(id)a0;
+ (id)convertTurnContext:(id)a0;
+ (id)convertTask:(id)a0;
+ (id)convertRepetitionResult:(id)a0;
+ (id)convertParser:(id)a0;
+ (id)convertUserParse:(id)a0;
+ (id)convertNLContext:(id)a0;
+ (id)convertLegacyNLContext:(id)a0;
+ (id)convertUtteranceAlignment:(id)a0;
+ (id)convertUserStatedTask:(id)a0;
+ (id)convertUtteranceSpan:(id)a0;
+ (id)convertUsoEdge:(id)a0;
+ (id)convertUsoEntityIdentifier:(id)a0;
+ (id)convertUsoNode:(id)a0;
+ (void)populateEventsWithMetadata:(id)a0 metadata:(id)a1;
+ (id)convertMatchingSpan:(id)a0;
+ (id)convertMatchingSpanTier1:(id)a0;
+ (id)convertTokenChain:(id)a0;
+ (id)convertReformedTurnInputBundle:(id)a0;
+ (id)getObjCUsoGraphFromOntologyUsoGraph:(struct unique_ptr<siri::ontology::UsoGraph, std::default_delete<siri::ontology::UsoGraph>> { struct __compressed_pair<siri::ontology::UsoGraph *, std::default_delete<siri::ontology::UsoGraph>> { struct UsoGraph *x0; } x0; })a0;
+ (id)convertUsoNodeDataTier1:(id)a0 index:(long long)a1;
+ (id)convertUsoEntityIdentifierTier1:(id)a0 index:(long long)a1;
+ (id)convertUsoEntityIdentifier:(id)a0 index:(long long)a1;
+ (id)convertNonTier1UsoGraph:(id)a0 identifiers:(id)a1;
+ (id)convertVersion:(id)a0;
+ (int)convertUSOEntityIdentifierNluComponent:(int)a0;
+ (int)convertUsoBackingAppBundleType:(id)a0;
+ (BOOL)isNlContextNotEmpty:(id)a0;
+ (BOOL)isLegacyNlContextNotEmpty:(id)a0;
+ (id)createNLXLegacyNLContextTier1Event:(id)a0 withLinkId:(id)a1;
+ (id)convertPrompted:(id)a0;
+ (id)convertOffered:(id)a0;
+ (id)convertGaveOptions:(id)a0;
+ (id)convertInformed:(id)a0;
+ (id)convertReportedSuccess:(id)a0;
+ (id)convertReportedFailure:(id)a0;
+ (id)createSystemDialogActTier1Event:(id)a0 withLinkId:(id)a1;
+ (id)convertAccepted:(id)a0;
+ (id)getReferenceFromAccepted:(id)a0;
+ (id)convertRejected:(id)a0;
+ (id)getReferenceFromRejected:(id)a0;
+ (id)convertCancelled:(id)a0;
+ (id)getReferenceFromCancelled:(id)a0;
+ (id)convertWantedToRepeat:(id)a0;
+ (id)getReferenceFromWantedToRepeat:(id)a0;
+ (id)convertAcknowledged:(id)a0;
+ (id)getReferenceFromAcknowledged:(id)a0;
+ (id)convertWantedToProceed:(id)a0;
+ (id)getReferenceFromWantedToProceed:(id)a0;
+ (id)convertWantedToPause:(id)a0;
+ (id)getReferenceFromWantedToPause:(id)a0;
+ (id)convertDelegated:(id)a0;
+ (id)getTaskFromUserStatedTask:(id)a0;
+ (id)createAllZeroUUID;
+ (id)createDelegatedUserDialogActTier1Event:(id)a0 withLinkId:(id)a1;
+ (id)convertInternalSpanData:(id)a0;
+ (int)convertCDMMatcherName:(int)a0;
+ (id)convertSiriVocabularySpanData:(id)a0;
+ (id)convertPLUMSpanData:(id)a0;
+ (id)convertToken:(id)a0;
+ (id)createTokenizationEndedLog:(id)a0 tokenizationResponse:(id)a1 metadata:(id)a2;
+ (id)createMatchingSpanTier1Event:(id)a0 withlinkId:(id)a1;
+ (id)convertNonTier1UsoGraph:(id)a0;

@end
