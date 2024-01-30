@class NSArray;

@interface ASAuthorizationSingleSignOnRequest : ASAuthorizationOpenIDRequest

@property (copy, nonatomic) NSArray *authorizationOptions;
@property (nonatomic, getter=isUserInterfaceEnabled) BOOL userInterfaceEnabled;

- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;

@end
