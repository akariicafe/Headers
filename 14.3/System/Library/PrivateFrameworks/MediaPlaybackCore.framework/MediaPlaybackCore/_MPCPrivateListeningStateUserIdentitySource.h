@class ICUserIdentity, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface _MPCPrivateListeningStateUserIdentitySource : MPCPrivateListeningStateSource {
    ICUserIdentity *_userIdentity;
    NSNumber *_cachedValue;
}

@property (class, readonly) NSObject<OS_dispatch_queue> *sharedAccessQueue;

+ (BOOL)supportsSecureCoding;

- (long long)sourceType;
- (id)_initWithUserIdentity:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;
- (id)currentValue;
- (void)encodeWithCoder:(id)a0;
- (void)_loadCurrentValueFromIdentityProperties;

@end
