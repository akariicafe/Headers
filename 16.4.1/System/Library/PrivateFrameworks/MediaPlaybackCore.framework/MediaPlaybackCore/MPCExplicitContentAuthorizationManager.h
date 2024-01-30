@class NSError, ICAgeVerificationState;
@protocol MPCExplicitContentAuthorizationDelegate;

@interface MPCExplicitContentAuthorizationManager : NSObject

@property (class, readonly, nonatomic) MPCExplicitContentAuthorizationManager *sharedManager;

@property (readonly, nonatomic) long long authorizationReason;
@property (nonatomic) long long status;
@property (copy, nonatomic) NSError *authorizationError;
@property (copy, nonatomic) ICAgeVerificationState *lastKnownAgeVerificationState;
@property (weak, nonatomic) id<MPCExplicitContentAuthorizationDelegate> delegate;

- (id)_init;
- (void).cxx_destruct;
- (void)_setupWithAgeVerificationState:(id)a0;
- (BOOL)_askPlaybackAuthorizationForItem:(id)a0 reason:(long long)a1;
- (id)_explicitContentErrorWithUnderlyingError:(id)a0 message:(id)a1;
- (id)_retrieveAgeVerificationStateForUserIdentity:(id)a0;
- (void)_setupWithAgeGateForItem:(id)a0;
- (BOOL)_shouldAskPlaybackAuthorizationForItem:(id)a0 reason:(long long)a1;
- (void)_updateAuthorizationStatusWithAuthorizationState:(id)a0 forItem:(id)a1;
- (BOOL)isItemAuthorized:(id)a0;
- (BOOL)isItemAuthorized:(id)a0 shouldAskForAuthorization:(BOOL)a1;

@end
