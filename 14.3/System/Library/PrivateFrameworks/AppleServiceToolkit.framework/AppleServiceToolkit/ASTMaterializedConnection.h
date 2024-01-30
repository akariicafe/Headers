@class NSString, ASTIdentity, NSMutableURLRequest;
@protocol ASTConnectionStatusDelegate;

@interface ASTMaterializedConnection : NSObject <ASTConnection>

@property (nonatomic) BOOL allowsCellularAccess;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) ASTIdentity *identity;
@property (retain, nonatomic) NSString *signature;
@property (nonatomic) double timeout;
@property (readonly, nonatomic) NSString *method;
@property (readonly, nonatomic) NSString *endpoint;
@property (readonly, nonatomic) NSString *contentType;
@property (readonly, nonatomic) NSString *accept;
@property (copy, nonatomic) id /* block */ didReceiveResponse;
@property (readonly, nonatomic) NSMutableURLRequest *request;
@property (weak, nonatomic) id<ASTConnectionStatusDelegate> delegate;
@property (nonatomic) long long state;
@property (nonatomic) long long networkDisconnectedRetryCount;
@property (nonatomic) BOOL retryOnNetworkDisconnected;
@property (readonly, nonatomic) unsigned long long rootOfTrust;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)addBody:(id)a0 gzip:(BOOL)a1;
- (unsigned long long)_rootOfTrust;
- (id)_acceptLanguage;

@end
