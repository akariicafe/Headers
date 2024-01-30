@class NSString, _PASLock, NSXPCConnection;
@protocol SGReverseTemplateJS;

@interface SGExtractionDissector : SGPipelineDissector <SGMailMessageProcessing, SGTextMessageProcessing, SGInteractionProcessing> {
    NSXPCConnection *_xpcConnection;
    id<SGReverseTemplateJS> _reverseTemplateJSNoXPC;
    _PASLock *_classifierCache;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)addParams:(id)a0 toParameterizedString:(id)a1 allowAlternatives:(BOOL)a2;
+ (id)addressDictionaryToString:(id)a0;
+ (id)addParams:(id)a0 toParameterizedString:(id)a1;
+ (BOOL)shouldIgnoreMailMessage:(id)a0;

- (id)eventClassificationForMailMessage:(id)a0;
- (BOOL)isStructuredEventCandidateForURL:(id)a0 title:(id)a1;
- (id)jsonLdOutputFromMailMessage:(id)a0;
- (id)init;
- (id)reverseMapMailMessage:(id)a0 withPreprocessedHTML:(id)a1 forCategory:(id)a2 withSchemExpectation:(id)a3;
- (void).cxx_destruct;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)outputFromPackedJSSchema:(id)a0;
- (void)dealloc;
- (void)_addEnrichmentsToEntityForOutput:(id)a0 interaction:(id)a1 entity:(id)a2 startTime:(unsigned long long)a3 backPressureHazard:(int)a4;
- (id)packedJSURLFromURL:(id)a0 title:(id)a1 payload:(id)a2;
- (void)dissectURL:(id)a0 title:(id)a1 htmlPayload:(id)a2 entity:(id)a3;
- (void)_addEnrichmentsToEntityForOutput:(id)a0 entity:(id)a1 startTime:(unsigned long long)a2 backPressureHazard:(int)a3;
- (id)diffSchemas:(id)a0 withExpectedSchemas:(id)a1;
- (void)dissectTextMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)jsonLdOutputFromTextMessage:(id)a0;
- (id)jsDictForResolveCandidates:(id)a0 forCategory:(id)a1 label:(id)a2 rawIndexSet:(id)a3 taggedCharacterRanges:(id)a4;
- (id)packedJSURLFromURL:(id)a0 title:(id)a1 payload:(id)a2 creationTimestamp:(double)a3;
- (id)packedJSInteractionFromInteraction:(id)a0 bundleIdentifier:(id)a1 creationTimestamp:(double)a2;
- (id)eventActivitiesForReservationWithReference:(id)a0 inParentEntity:(id)a1 interaction:(id)a2;
- (id)eventClassificationWithoutXPCForMailMessage:(id)a0;
- (id)getAndRemoveItemReferencesFromSchemas:(id)a0;
- (void)addEnrichmentsToEntityForOutputItems:(id)a0 exceptions:(id)a1 jsMessageLogs:(id)a2 interaction:(id)a3 entity:(id)a4 startTime:(unsigned long long)a5 backPressureHazard:(int)a6;
- (id)jsonLdOutputFromURL:(id)a0 title:(id)a1 payload:(id)a2 extractionDate:(id)a3;
- (id)parseHTML:(id)a0;
- (id)entityForOutputItem:(id)a0 parentEntity:(id)a1 outputExceptions:(id)a2 outputInfos:(id)a3 interaction:(id)a4;
- (id)packedJSMailMessageFromMailMessage:(id)a0;
- (id)packedJSMailMessageFromMailMessage:(id)a0 context:(id)a1;
- (id)jsonLdOutputFromPackedJSEntity:(id)a0;
- (id)eventsFromSchemaOrgItems:(id)a0;
- (id)packedJSSchemaFromSchemaOrgItems:(id)a0;
- (BOOL)exceedsMaxHTMLContentLength:(unsigned long long)a0;
- (id)outputFromPackedJSMailMessage:(id)a0;
- (id)entityForOutputItem:(id)a0 parentEntity:(id)a1 outputExceptions:(id)a2 outputInfos:(id)a3;
- (id)outputFromPackedJSTextMessage:(id)a0;
- (id)resolveCandidates:(id)a0 forCategory:(id)a1 label:(id)a2 rawIndexSet:(id)a3 taggedCharacterRanges:(id)a4;
- (id)enrichmentsFromSchemas:(id)a0 inMessage:(id)a1 parentEntity:(id)a2;
- (BOOL)shouldDownloadFull:(id)a0;
- (void)dissectInteraction:(id)a0 entity:(id)a1 context:(id)a2;
- (id)entityForOutputItem:(id)a0 withSiblings:(id)a1 parentEntity:(id)a2 outputExceptions:(id)a3 outputInfos:(id)a4 interaction:(id)a5;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;
- (id)packedJSTextMessageFromTextMessage:(id)a0;
- (void)addInteractionTagsToEnrichment:(id)a0 inEntity:(id)a1 interaction:(id)a2;
- (id)resolveCandidatesWithoutXPC:(id)a0 forCategory:(id)a1 label:(id)a2 rawIndexSet:(id)a3 taggedCharacterRanges:(id)a4;

@end
