@class ICUserIdentity, NSNumber, NSObject;
@protocol OS_dispatch_queue;

@interface _MPCPrivateListeningStateUserIdentitySource : MPCPrivateListeningStateSource {
    ICUserIdentity *_userIdentity;
    NSNumber *_cachedValue;
}

@property (class, readonly, nonatomic) NSObject<OS_dispatch_queue> *sharedAccessQueue;

+ (BOOL)supportsSecureCoding;

- (long long)sourceType;
- (void)encodeWithCoder:(id)a0;
- (void)_loadCurrentValueFromIdentityProperties;
- (void).cxx_destruct;
- (id)_initWithUserIdentity:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)_handleHomeUserPrivateListeningDidChangeNotification:(id)a0;
- (id)currentValue;
- (void)dealloc;
- (void)_handleUserIdentityStoreDidChangeNotification:(id)a0;

@end
