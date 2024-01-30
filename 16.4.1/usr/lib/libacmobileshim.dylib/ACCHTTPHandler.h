@class NSDictionary, NSString, NSArray;
@protocol ACFHTTPTransportProtocol, ACCAuthContextProtocol;

@interface ACCHTTPHandler : NSObject

@property BOOL shouldIgnoreInvalidDSPublicKey;
@property BOOL shouldIgnoreInvalidToken;
@property (retain, nonatomic) id<ACCAuthContextProtocol> context;
@property (retain, nonatomic) id<ACFHTTPTransportProtocol> transport;
@property (readonly, nonatomic) BOOL isCanceled;
@property (copy, nonatomic) id /* block */ finalizeBlock;
@property (readonly, nonatomic) NSDictionary *httpRequestDictionary;
@property (readonly, nonatomic) NSDictionary *requestHeader;
@property (readonly, nonatomic) NSDictionary *requestBody;
@property (readonly, nonatomic) NSString *iForgotURL;
@property (readonly, nonatomic) NSArray *serverHosts;
@property (readonly, nonatomic) NSArray *serverAttemptsDelays;

+ (id)handlerWithContext:(id)a0;

- (id)realm;
- (void)dealloc;
- (id)initWithContext:(id)a0;
- (void)cancelRequest;
- (void)updateTransport;
- (id)convertErrorToACMError:(id)a0;
- (id)iForgotString;
- (BOOL)installCertificateWithString:(id)a0 version:(id)a1 forRealm:(id)a2;
- (id)invalidPublicKeyErrorForReponse:(id)a0 error:(id)a1;
- (BOOL)isConnectionError:(id)a0;
- (BOOL)isUknownServerError:(id)a0;
- (void)performRequestWithCompletionBlock:(id /* block */)a0;
- (id)responseWithData:(id)a0 error:(id *)a1;
- (BOOL)shouldReturnResponse:(id)a0 orReportError:(id *)a1;
- (BOOL)shouldTryOtherServers:(id)a0 error:(id)a1;
- (void)uninstallPublicKeyForRealm:(id)a0;
- (BOOL)updatePublicKeyWithResponse:(id)a0;

@end
