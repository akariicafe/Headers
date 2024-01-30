@protocol ASAuthorizationProvider;

@interface ASAuthorizationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<ASAuthorizationProvider> provider;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProvider:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
