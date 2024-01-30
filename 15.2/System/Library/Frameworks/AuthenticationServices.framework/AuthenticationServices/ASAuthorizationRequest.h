@protocol ASAuthorizationProvider;

@interface ASAuthorizationRequest : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) id<ASAuthorizationProvider> provider;

+ (id)new;

- (void)encodeWithCoder:(id)a0;
- (id)initWithProvider:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
