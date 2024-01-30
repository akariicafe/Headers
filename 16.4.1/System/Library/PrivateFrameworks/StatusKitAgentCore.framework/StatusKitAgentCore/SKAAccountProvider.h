@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SKAAccountProvider : NSObject <SKAAccountProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tokenFetchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (id)_primarySystemiCloudAccountWithError:(id *)a0;
- (id)presenceJwtTokenForPrimaryAccountWithError:(id *)a0;
- (id)statusJwtTokenForPrimaryAccountWithError:(id *)a0;
- (BOOL)_shouldAttemptReauth;
- (long long)_authResetTime;
- (long long)_maxReauthCount;
- (void)_markReauthAttempt;
- (id)init;
- (id)_jwtTokenForPrimaryAccountForIdentifier:(id)a0 withError:(id *)a1;
- (void).cxx_destruct;
- (void)refreshCredentialForPrimaryAccountWithCompletion:(id /* block */)a0;

@end
