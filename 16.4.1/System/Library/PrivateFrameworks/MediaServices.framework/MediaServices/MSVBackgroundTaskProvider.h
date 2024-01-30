@class NSMutableDictionary, BKSProcessAssertion;

@interface MSVBackgroundTaskProvider : NSObject <MSVBackgroundTaskProviding> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BKSProcessAssertion *_assertion;
    long long _assertionCount;
    unsigned int _assertionInvalidationNonce;
}

@property (nonatomic) unsigned long long lastIdentifier;
@property (retain, nonatomic) NSMutableDictionary *timeoutGuards;

+ (id)sharedProvider;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)beginTaskWithExpirationHandler:(id /* block */)a0;
- (unsigned long long)beginTaskWithName:(id)a0 expirationHandler:(id /* block */)a1;
- (void)endTask:(unsigned long long)a0;
- (BOOL)_locked_acquireAssertion;
- (void)_locked_releaseAssertion;

@end
