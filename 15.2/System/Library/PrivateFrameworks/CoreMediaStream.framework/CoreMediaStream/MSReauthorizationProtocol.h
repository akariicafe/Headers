@class NSArray;

@interface MSReauthorizationProtocol : MSStreamsProtocol {
    struct __MSRPCContext { struct __MSSPCContext { void *owner; struct __CFString *personID; struct __CFString *authToken; struct __CFDictionary *deviceInfo; struct __CFDictionary *clientHeadersRef; double connectionTimeout; void /* function */ *__didReceiveDataCallback; void /* function */ *__didFinishCallback; void /* function */ *__didFailAuthenticationCallback; void /* function */ *__didReceiveServerSideConfigVersionCallback; void /* function */ *__didReceiveRetryAfterCallback; struct CFURLConnectionClient_V1 *__client; struct _CFURLConnection *__connection; struct __CFData *__responseData; struct __CFHTTPMessage *__response; struct __CFError *__error; } _super; void /* function */ *finishedCallback; void /* function */ *authFailedCallback; void /* function */ *didReceiveRetryAfterCallback; void /* function */ *didReceiveServerSideConfigurationVersionCallback; } _context;
    NSArray *_assetsInFlight;
}

- (void)abort;
- (void)setDelegate:(id)a0;
- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (void).cxx_destruct;
- (id)delegate;
- (void)dealloc;
- (void)_coreProtocolDidFinishResponse:(id)a0 error:(id)a1;
- (void)_coreProtocolDidFailAuthenticationError:(id)a0;
- (void)requestReauthorizationForAssets:(id)a0;

@end
