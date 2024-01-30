@class SSVFairPlaySAPSession, NSString, NSURL, SSURLBag, SSVURLBagInterpreter, SSAuthenticationContext, NSURLRequest, SSURLRequestProperties, SSVURLDataConsumer, SSVSAPSignaturePolicy;
@protocol SSURLConnectionRequestDelegate;

@interface SSURLConnectionRequest : SSRequest <SSXPCCoding> {
    SSURLRequestProperties *_requestProperties;
    SSAuthenticationContext *_authenticationContext;
    SSVURLDataConsumer *_dataConsumer;
    NSURL *_destinationFileURL;
    BOOL _runsInProcess;
    SSVFairPlaySAPSession *_sapSession;
    SSVSAPSignaturePolicy *_sapSignaturePolicy;
    BOOL _sendsResponseForHTTPFailures;
    BOOL _shouldMescalSign;
    SSURLBag *_urlBag;
    SSVURLBagInterpreter *_urlBagInterpreter;
}

@property (copy) SSAuthenticationContext *authenticationContext;
@property (retain) SSVURLDataConsumer *dataConsumer;
@property BOOL runsInProcess;
@property BOOL sendsResponseForHTTPFailures;
@property (retain) SSVFairPlaySAPSession *SAPSession;
@property (copy) SSVSAPSignaturePolicy *SAPSignaturePolicy;
@property (nonatomic) id<SSURLConnectionRequestDelegate> delegate;
@property (readonly) NSURLRequest *URLRequest;
@property (readonly) SSURLRequestProperties *requestProperties;
@property (copy) NSURL *destinationFileURL;
@property BOOL shouldMescalSign;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configureWithURLBagDictionary:(id)a0;
- (void)configureWithURLBag:(id)a0;
- (id)initWithURLRequest:(id)a0;
- (BOOL)start;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)init;
- (void)startWithCompletionBlock:(id /* block */)a0;
- (void)dealloc;
- (id)initWithRequestProperties:(id)a0;
- (BOOL)_canRunInProcess;
- (void)startWithConnectionResponseBlock:(id /* block */)a0;

@end
