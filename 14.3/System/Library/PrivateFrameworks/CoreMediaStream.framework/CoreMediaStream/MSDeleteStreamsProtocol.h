@class NSMutableArray;
@protocol MSDeleteStreamsProtocolDelegate;

@interface MSDeleteStreamsProtocol : MSStreamsProtocol {
    struct _MSDSPCContext { struct __MSSPCContext { void *owner; struct __CFString *personID; struct __CFString *authToken; struct __CFDictionary *deviceInfo; struct __CFDictionary *clientHeadersRef; double connectionTimeout; void /* function */ *__didReceiveDataCallback; void /* function */ *__didFinishCallback; void /* function */ *__didFailAuthenticationCallback; void /* function */ *__didReceiveServerSideConfigVersionCallback; void /* function */ *__didReceiveRetryAfterCallback; struct CFURLConnectionClient_V1 *__client; struct _CFURLConnection *__connection; struct __CFData *__responseData; struct __CFHTTPMessage *__response; struct __CFError *__error; } _super; void /* function */ *finishedCallback; void /* function */ *authFailedCallback; void /* function */ *didReceiveServerSideConfigurationVersionCallback; void /* function */ *didReceiveRetryAfterCallback; } _context;
    NSMutableArray *_collectionsInFlight;
}

@property (nonatomic) id<MSDeleteStreamsProtocolDelegate> delegate;

- (void).cxx_destruct;
- (void)abort;
- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (void)_resetConnectionVariables;
- (void)_coreProtocolDidFinishResponse:(id)a0 error:(id)a1;
- (void)_coreProtocolDidFailAuthenticationError:(id)a0;
- (void)sendDeletionRequestForAssetCollections:(id)a0;

@end
