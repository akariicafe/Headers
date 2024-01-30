@class NSString;

@interface MDMMAIDAuthenticator : NSObject <DMCHTTPAuthenticator>

@property (retain, nonatomic) NSString *rmAccountID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_appleIDContext;
- (BOOL)authenticateRequest:(id)a0 error:(id *)a1;
- (BOOL)prepareTask:(id)a0 error:(id *)a1;
- (id)initWithRMAccountID:(id)a0;

@end
