@class NSURL, NSString;

@interface ASAuthorizationSingleSignOnProvider : NSObject <ASAuthorizationProvider>

@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) BOOL canPerformAuthorization;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;
+ (id)authorizationProviderWithIdentityProviderURL:(id)a0;

@end
