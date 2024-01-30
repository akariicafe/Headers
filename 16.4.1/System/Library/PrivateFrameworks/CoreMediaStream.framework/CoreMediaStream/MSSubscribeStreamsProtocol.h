@interface MSSubscribeStreamsProtocol : MSStreamsProtocol {
    struct __MSSSPCContext { struct __MSSPCContext { void *owner; struct __CFString *personID; struct __CFString *authToken; struct __CFDictionary *deviceInfo; struct __CFDictionary *clientHeadersRef; double connectionTimeout; void /* function */ *__didReceiveDataCallback; void /* function */ *__didFinishCallback; void /* function */ *__didFailAuthenticationCallback; void /* function */ *__didReceiveServerSideConfigVersionCallback; void /* function */ *__didReceiveRetryAfterCallback; struct CFURLConnectionClient_V1 *__client; struct _CFURLConnection *__connection; struct __CFData *__responseData; struct __CFHTTPMessage *__response; struct __CFError *__error; } _super; void /* function */ *finishedCallback; void /* function */ *gotDataChunkCallback; void /* function */ *authFailedCallback; void /* function */ *didReceiveServerSideConfigurationVersionCallback; void /* function */ *didReceiveRetryAfterCallback; double connectionTimeout; long long __state; struct __CFData *__chunkLengthData; struct __CFData *__currentChunkData; long long __chunkBytesRemaining; } _context;
    int _chunkIndex;
    struct __MSSSPCChunkParsingContext { void *x0; void /* function */ *x1; void /* function */ *x2; void /* function */ *x3; void /* function */ *x4; void /* function */ *x5; struct __CFString *x6; struct __CFURL *x7; struct __CFString *x8; struct __CFString *x9; int x10; } *_parseContext;
}

- (id)delegate;
- (void)abort;
- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (void)setDelegate:(id)a0;
- (void)dealloc;
- (id)_invalidFieldErrorWithFieldName:(id)a0;
- (void)_parseNextChunk;
- (id)_assetCollectionsFromCoreArray:(id)a0 personID:(id)a1 outError:(id *)a2;
- (id)_assetFromCoreDictionary:(id)a0 personID:(id)a1 outError:(id *)a2;
- (void)_chunkDidBeginStreamForPersonID:(id)a0 wasReset:(BOOL)a1 metadata:(id)a2;
- (void)_chunkDidEndStreamForPersonID:(id)a0 ctag:(id)a1;
- (void)_chunkDidFindSubscriptionGoneForPersonID:(id)a0;
- (void)_chunkDidFindSubscriptionTemporarilyUnavailableForPersonID:(id)a0;
- (void)_chunkDidParseAssetCollections:(id)a0 forPersonID:(id)a1;
- (void)_coreProtocolDidFailAuthentication:(id)a0;
- (void)_coreProtocolDidFinishError:(id)a0;
- (void)_coreProtocolDidGetDataChunk:(id)a0;
- (id)_invalidFieldErrorWithFieldName:(id)a0 suggestion:(id)a1;
- (void)_parseChunks;
- (id)_pathToChunkIndex:(int)a0;
- (void)pollForSubscriptionUpdatesWithAccountAnchors:(id)a0;

@end
