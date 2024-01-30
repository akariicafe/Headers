@class _PASNotificationToken, NSString, NSURL, SGReverseTemplatesJSDataDetectors, JSContext, NSMutableArray, NSObject, NSISO8601DateFormatter, JSVirtualMachine;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SGReverseTemplateJS : NSObject <SGReverseTemplateJS> {
    JSVirtualMachine *_jsVM;
    NSMutableArray *_memoryMappedFiles;
    NSMutableArray *_memoryMappedFileNames;
    JSContext *_jsContext;
    SGReverseTemplatesJSDataDetectors *_dd;
    _PASNotificationToken *_assetUpdateToken;
    NSURL *_assetPath;
    NSString *_localeIdentifier;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_memoryPressureQueue;
    NSObject<OS_dispatch_source> *_memoryPressureSource;
    NSISO8601DateFormatter *_dateFormatter;
}

+ (id)fakeFlightInformationWithAirlineCode:(id)a0 flightNumber:(id)a1 flightDate:(id)a2;

- (BOOL)shouldDownloadFull:(id)a0;
- (void)dealloc;
- (id)flightInformationWithAirlineCode:(id)a0 flightNumber:(id)a1 flightDate:(id)a2;
- (id)init;
- (id)md5Hash:(id)a0;
- (void).cxx_destruct;
- (void)setAssetPath:(id)a0;
- (id)processLoadRequestWithFileName:(id)a0;
- (id)_prepareEntity:(id)a0;
- (void)flightInformationWithAirlineCode:(id)a0 flightNumber:(id)a1 flightDate:(id)a2 reply:(id /* block */)a3;
- (void)holdXpcTransactionForShortDelay;
- (id)_callJSFunction:(id)a0 withArguments:(id)a1;
- (id)_diffSchemas:(id)a0 withExpectedSchemas:(id)a1;
- (id)_eventClassificationForEntity:(id)a0;
- (id)_getFlightReferencesAndReservationId:(id)a0;
- (void)_handleMemoryPressureStatus:(unsigned long long)a0;
- (id)_mergeSchemas:(id)a0 withExpectedSchemas:(id)a1;
- (id)_prepareArguments:(id)a0;
- (id)_privacyAwareLogsForMLExtractions:(id)a0;
- (id)_resolveCandidatesForJSDict:(id)a0;
- (id)_stringFromMemoryPressureStatus:(unsigned long long)a0;
- (id)dictionaryFromTimezone:(id)a0;
- (void)diffSchemas:(id)a0 withExpectedSchemas:(id)a1 reply:(id /* block */)a2;
- (void)emailToJsonLd:(id)a0 reply:(id /* block */)a1;
- (void)emailToOutput:(id)a0 reply:(id /* block */)a1;
- (void)eventClassificationForEntity:(id)a0 reply:(id /* block */)a1;
- (id)formattedDate:(id)a0 withTimezone:(id)a1;
- (void)freeJSContext;
- (void)getFlightReferencesAndReservationId:(id)a0 reply:(id /* block */)a1;
- (id)getJSContext;
- (void)initCurrentAsset;
- (id)loadJSFromASCIIFile:(id)a0;
- (id)loadTrieWithFileName:(id)a0;
- (id)mappedArrayBufferForFileName:(id)a0;
- (void)mergeSchemas:(id)a0 withExpectedSchemas:(id)a1 reply:(id /* block */)a2;
- (id)outputExceptionsFromOutput:(id)a0;
- (void)parseHTML:(id)a0 reply:(id /* block */)a1;
- (id)payloadToOutputWithEntryPoint:(id)a0 arguments:(id)a1;
- (void)payloadToOutputWithEntryPoint:(id)a0 arguments:(id)a1 reply:(id /* block */)a2;
- (id)preprocessPackedSGMessage:(id)a0;
- (void)privacyAwareLogsForMLExtractions:(id)a0 reply:(id /* block */)a1;
- (void)refreshAssetPath;
- (void)resolveCandidatesForJSDict:(id)a0 reply:(id /* block */)a1;
- (id)reverseMapEntity:(id)a0 forCategory:(id)a1 withSchemaExpectation:(id)a2;
- (void)schemaOrgToOutput:(id)a0 reply:(id /* block */)a1;
- (id)sfAirportToDictionnary:(id)a0;
- (id)sfFlightStatusToString:(int)a0;
- (id)sfFlightsToDictionary:(id)a0;
- (void)shouldDownloadFull:(id)a0 reply:(id /* block */)a1;
- (void)textMessageToOutput:(id)a0 reply:(id /* block */)a1;

@end
