@class LAContext, NSMapTable, NSData, NSHashTable, NSMutableOrderedSet;
@protocol _SFAuthenticationClient, _SFAuthenticationContextDelegate;

@interface _SFAuthenticationContext : NSObject <LAUIDelegate> {
    LAContext *_context;
    id<_SFAuthenticationClient> _currentClientBeingAuthenticated;
    NSHashTable *_clients;
    NSMutableOrderedSet *_clientsAwaitingAuthentication;
    NSMapTable *_clientsAwaitingAuthenticationToCompletionBlocks;
    double _authenticationGracePeriod;
    double _lastAuthenticatedSessionStartTime;
    double _lastAuthenticatedSessionEndTime;
    double _lastApplicationBackgroundTime;
    BOOL _successfullyAuthenticated;
    BOOL _authenticationInvalidated;
    BOOL _ongoingAuthenticationCanceled;
    int _notificationToken;
    BOOL _matchFound;
    BOOL _fingerDetectRequired;
    unsigned long long _numberOfBiometricAuthenticationFailures;
}

@property (readonly, nonatomic) BOOL needsAuthentication;
@property (readonly, nonatomic) NSData *externalizedContext;
@property (weak, nonatomic) id<_SFAuthenticationContextDelegate> delegate;

- (void)applicationWillEnterForeground;
- (void)applicationDidEnterBackground;
- (id)_authenticationContext;
- (void).cxx_destruct;
- (id)init;
- (void)invalidateClient:(id)a0;
- (void)dealloc;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (void)authenticateForClient:(id)a0 userInitiated:(BOOL)a1 completion:(id /* block */)a2;
- (void)_invalidateAuthentication;
- (BOOL)_monotonicTimeIsWithinAuthenticationGracePeriod:(double)a0;
- (BOOL)_hasAuthenticationCapability:(id *)a0;
- (void)_processNextClientAwaitingAuthenticationUserInitiated:(BOOL)a0;
- (BOOL)_contextRequiresSessionBasedAuthentication;
- (void)_evaluatePolicyForClient:(id)a0 userInitiated:(BOOL)a1 reply:(id /* block */)a2;
- (BOOL)_contextShouldAllowPasscodeFallback;
- (BOOL)_contextShouldAllowMultipleBiometricFailures;
- (void)_cancelOngoingAuthentication;
- (BOOL)_canInvalidateAuthentication;
- (void)_cancelOngoingAndPendingAuthentications;
- (void)_handleTouchIDEventWithParameters:(id)a0;
- (void)preemptOngoingAuthenticationWithPasccodeAuthentication;

@end
