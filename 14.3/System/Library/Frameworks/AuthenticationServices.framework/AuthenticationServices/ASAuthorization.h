@protocol ASAuthorizationProvider, ASAuthorizationCredential;

@interface ASAuthorization : NSObject

@property (readonly, nonatomic) id<ASAuthorizationProvider> provider;
@property (readonly, nonatomic) id<ASAuthorizationCredential> credential;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)initWithProvider:(id)a0 credential:(id)a1;

@end
