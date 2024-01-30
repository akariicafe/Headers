@class NSString, NSArray, NSURL;

@interface WFDropboxAppAuthorizationSession : NSObject <WFOAuth2AuthorizationSession>

@property (readonly, nonatomic) NSString *clientID;
@property (readonly, nonatomic) NSString *state;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (readonly, nonatomic) NSArray *authorizationURLs;
@property (readonly, nonatomic) NSURL *successURI;
@property (readonly, nonatomic) NSURL *cancelURI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (BOOL)resumeSessionWithURL:(id)a0;
- (id)initWithClientID:(id)a0 completionHandler:(id /* block */)a1;

@end
