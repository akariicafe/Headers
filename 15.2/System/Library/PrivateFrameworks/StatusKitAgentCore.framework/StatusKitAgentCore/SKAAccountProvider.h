@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface SKAAccountProvider : NSObject <SKAAccountProviding>

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *tokenFetchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logger;

- (id)jwtTokenForPrimaryAccountWithError:(id *)a0;
- (void)refreshCredentialForPrimaryAccountWithCompletion:(id /* block */)a0;
- (id)_primarySystemiCloudAccountWithError:(id *)a0;
- (long long)_maxReauthCount;
- (BOOL)_shouldAttemptReauth;
- (void)_markReauthAttempt;
- (void).cxx_destruct;
- (long long)_authResetTime;
- (id)init;

@end
