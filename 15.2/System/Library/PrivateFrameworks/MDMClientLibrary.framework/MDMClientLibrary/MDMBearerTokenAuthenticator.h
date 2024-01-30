@class NSString;

@interface MDMBearerTokenAuthenticator : NSObject <DMCHTTPAuthenticator>

@property (retain, nonatomic) NSString *rmAccountID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithRMAccountID:(id)a0;
- (BOOL)authenticateRequest:(id)a0 error:(id *)a1;

@end
