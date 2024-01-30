@interface ICURLResponseAuthenticationProvider : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long interactionLevel;

+ (id)defaultProvider;

- (void)performAuthenticationToHandleResponse:(id)a0 toRequest:(id)a1 withCompletionHandler:(id /* block */)a2;
- (id)initWithUserInteractionLevel:(long long)a0;
- (unsigned long long)hash;
- (id)initWithCoder:(id)a0;
- (void)performAuthenticationUsingRequestContext:(id)a0 withCompletionHandler:(id /* block */)a1;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
