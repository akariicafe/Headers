@class NSString;

@interface SGStructuredEventDissector : SGPipelineDissector <SGMailMessageProcessing>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;
+ (void)logShadowLoggingForSchema:(id)a0 parentEntity:(id)a1 timingProcessingInMs:(unsigned long long)a2 eventClassification:(id)a3 mailMessage:(id)a4;
+ (id)schemaStringForEventStatus:(unsigned char)a0;
+ (id)schemaOrgAndMissingEntitiesForPreprocessed:(id)a0 eventClassification:(id)a1 fromSuggestTool:(BOOL)a2;
+ (id)tupleWithError:(id)a0 label:(id)a1;
+ (id)annotateContent:(id)a0 withLabel:(id)a1 forMatchingString:(id)a2;
+ (id)outputLogsForClassification:(id)a0;
+ (id)schemaPostalAddressForPostalAddressExtraction:(id)a0;
+ (id)tupleWithEntity:(id)a0 label:(id)a1;
+ (void)logFallbackLoggingForSchema:(id)a0 parentEntity:(id)a1 timingProcessingInMs:(unsigned long long)a2 eventClassification:(id)a3 mailMessage:(id)a4;
+ (void)addSchemaAsEnrichment:(id)a0 inMessage:(id)a1 parentEntity:(id)a2 eventClassification:(id)a3;
+ (id)annotationMatchingStringsForSubject:(id)a0;
+ (id)labelsWithMatchingStringsForMailMessage:(id)a0;
+ (id)eventEnrichmentFromEntity:(id)a0;
+ (id)nilEntities:(id)a0;
+ (id)preprocessWithoutXPCForHTML:(id)a0 subject:(id)a1 epoch:(double)a2 category:(id)a3 labelsWithMatchingStrings:(id)a4;
+ (void)logFailedExtractionWithClassification:(id)a0 missingEntities:(id)a1 mlSummary:(id)a2 shadowExtraction:(BOOL)a3 timingProcessingInMs:(unsigned long long)a4 forMessage:(id)a5 parentEntity:(id)a6;
+ (id)preprocessDomParserResult:(id)a0 subject:(id)a1 epoch:(double)a2 category:(id)a3 labelsWithMatchingStrings:(id)a4;
+ (id)addressDictionaryForAddressComponents:(id)a0;
+ (id)schemaStringForDateComponents:(id)a0;
+ (id)plainTextStringsByLabelInTaggedCharacterRanges:(id)a0 inPlainText:(id)a1;
+ (id)schemaStringForReservationStatus:(unsigned char)a0;
+ (id)jsMessageLogsDictionaryForMailMessage:(id)a0;

- (id)preprocessHTML:(id)a0 subject:(id)a1 epoch:(double)a2 category:(id)a3 labelsWithMatchingStrings:(id)a4;
- (id)tagsWithModelOutputFromEnrichedTaggedCharacterRanges:(id)a0;
- (void)dissectMailMessage:(id)a0 entity:(id)a1 context:(id)a2;

@end
