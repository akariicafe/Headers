@class NSArray;

@interface ASAuthorizationSingleSignOnRequest : ASAuthorizationOpenIDRequest {
    NSArray *_authorizationOptions;
    BOOL _userInterfaceEnabled;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (copy, nonatomic) NSArray *authorizationOptions;
@property (nonatomic, getter=isUserInterfaceEnabled) BOOL userInterfaceEnabled;

- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;
- (BOOL)supportsStyle:(long long)a0;

@end
