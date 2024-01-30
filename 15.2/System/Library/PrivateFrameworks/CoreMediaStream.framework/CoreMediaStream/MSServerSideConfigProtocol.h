@class NSString, NSURL;
@protocol MSServerSideConfigProtocolDelegate;

@interface MSServerSideConfigProtocol : NSObject {
    NSURL *_configURL;
    struct __MSSSCPCContext { struct __MSSPCContext { void *owner; struct __CFString *personID; struct __CFString *authToken; struct __CFDictionary *deviceInfo; struct __CFDictionary *clientHeadersRef; double connectionTimeout; void /* function */ *__didReceiveDataCallback; void /* function */ *__didFinishCallback; void /* function */ *__didFailAuthenticationCallback; void /* function */ *__didReceiveServerSideConfigVersionCallback; void /* function */ *__didReceiveRetryAfterCallback; struct CFURLConnectionClient_V1 *__client; struct _CFURLConnection *__connection; struct __CFData *__responseData; struct __CFHTTPMessage *__response; struct __CFError *__error; } _super; void /* function */ *didFinishCallback; void /* function */ *didFailAuthenticationCallback; } _context;
}

@property (nonatomic) id<MSServerSideConfigProtocolDelegate> delegate;
@property (readonly, nonatomic) NSString *personID;

- (void)abort;
- (void)queryConfiguration;
- (id)initWithPersonID:(id)a0 baseURL:(id)a1;
- (void).cxx_destruct;
- (void)_didFinishWithResponse:(id)a0 error:(id)a1;
- (void)dealloc;
- (void)_didFailAuthenticationWithError:(id)a0;

@end
