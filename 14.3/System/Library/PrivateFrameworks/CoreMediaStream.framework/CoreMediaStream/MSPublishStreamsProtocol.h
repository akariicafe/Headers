@class NSArray;

@interface MSPublishStreamsProtocol : MSStreamsProtocol {
    struct __MSPSPCContext { struct __MSSPCContext { void *owner; struct __CFString *personID; struct __CFString *authToken; struct __CFDictionary *deviceInfo; struct __CFDictionary *clientHeadersRef; double connectionTimeout; void /* function */ *__didReceiveDataCallback; void /* function */ *__didFinishCallback; void /* function */ *__didFailAuthenticationCallback; void /* function */ *__didReceiveServerSideConfigVersionCallback; void /* function */ *__didReceiveRetryAfterCallback; struct CFURLConnectionClient_V1 *__client; struct _CFURLConnection *__connection; struct __CFData *__responseData; struct __CFHTTPMessage *__response; struct __CFError *__error; } _super; void /* function */ *finishedCallback; void /* function */ *authFailedCallback; void /* function */ *didReceiveServerSideConfigurationVersionCallback; void /* function */ *didReceiveRetryAfterCallback; } _context;
    NSArray *_assetCollectionsInFlight;
    struct __MSPSPCUCContext { struct __MSSPCContext { void *owner; struct __CFString *personID; struct __CFString *authToken; struct __CFDictionary *deviceInfo; struct __CFDictionary *clientHeadersRef; double connectionTimeout; void /* function */ *__didReceiveDataCallback; void /* function */ *__didFinishCallback; void /* function */ *__didFailAuthenticationCallback; void /* function */ *__didReceiveServerSideConfigVersionCallback; void /* function */ *__didReceiveRetryAfterCallback; struct CFURLConnectionClient_V1 *__client; struct _CFURLConnection *__connection; struct __CFData *__responseData; struct __CFHTTPMessage *__response; struct __CFError *__error; } _super; void /* function */ *finishedCallback; void /* function */ *authFailedCallback; void /* function */ *didReceiveServerSideConfigurationVersionCallback; } _UCContext;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)abort;
- (void)setDelegate:(id)a0;
- (id)delegate;
- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (id)_missingAssetFieldErrorWithFieldName:(id)a0;
- (BOOL)_insertInfoAboutAsset:(id)a0 intoDictionary:(id)a1 outError:(id *)a2;
- (void)_resetConnectionVariables;
- (id)_metadataDictForAsset:(id)a0 outError:(id *)a1;
- (id)_metadataDictForAssetCollection:(id)a0 outError:(id *)a1;
- (void)sendMetadataForAssetCollections:(id)a0;
- (void)sendUploadCompleteForAssetCollections:(id)a0;
- (void)_coreProtocolDidFinishResponse:(id)a0 error:(id)a1;
- (void)_coreProtocolDidFailAuthenticationError:(id)a0;
- (void)_coreProtocolDidFinishUCResults:(id)a0 error:(id)a1;

@end
