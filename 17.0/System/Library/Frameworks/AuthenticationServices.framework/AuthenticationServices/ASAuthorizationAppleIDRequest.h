@class NSString;

@interface ASAuthorizationAppleIDRequest : ASAuthorizationOpenIDRequest {
    NSString *_user;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (copy, nonatomic) NSString *user;

- (id)init;
- (void).cxx_destruct;

@end
