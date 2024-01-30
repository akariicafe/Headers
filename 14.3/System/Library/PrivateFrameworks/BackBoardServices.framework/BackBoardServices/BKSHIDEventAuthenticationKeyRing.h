@class NSArray, BKSHIDEventAuthenticationKey, BKSHIDEventAuthenticationKeyRetentionPolicy;

@interface BKSHIDEventAuthenticationKeyRing : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BKSHIDEventAuthenticationKeyRetentionPolicy *_retentionPolicy;
    BKSHIDEventAuthenticationKey *_authenticationKey;
    double _authenticationKeyTimeout;
    BKSHIDEventAuthenticationKey *_previousAuthenticationKey;
    double _previousAuthenticationKeyTimeout;
}

@property (readonly, nonatomic) BKSHIDEventAuthenticationKey *authenticationKey;
@property (readonly, nonatomic) NSArray *allAuthenticationKeys;

+ (id)keyRingWithRetentionPolicy:(id)a0;
+ (id)new;

- (void)_timePasses:(double)a0;
- (id)init;
- (void).cxx_destruct;

@end
