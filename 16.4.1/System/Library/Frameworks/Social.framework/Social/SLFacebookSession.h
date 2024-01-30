@interface SLFacebookSession : NSObject

+ (id)sharedSession;
+ (id)_remoteInterface;

- (id)init;
- (void)fetchLikeStatusForURL:(id)a0 flags:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)likeURL:(id)a0 completion:(id /* block */)a1;
- (void)unlikeURL:(id)a0 completion:(id /* block */)a1;
- (void)cancelUploadWithIdentifier:(id)a0;
- (void)injectCompletedUploadWithCompletion:(id /* block */)a0;
- (void)revokeAccessTokenForAppWithID:(id)a0;
- (void)revokeAllAccessTokensForDevice;
- (void)testCall;
- (id)tokenSecretForEntitledClientWithError:(id *)a0;
- (BOOL)uploadPost:(id)a0;
- (BOOL)uploadPost:(id)a0 forPID:(int)a1;
- (void)uploadPost:(id)a0 suppressAlerts:(BOOL)a1 withPostCompletion:(id /* block */)a2;
- (BOOL)uploadProfilePicture:(id)a0 error:(id *)a1;
- (void)uploadsInProgress:(id /* block */)a0;

@end
