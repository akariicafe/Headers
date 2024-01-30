@class NSString, NSDictionary;

@interface RMGenericAuthenticationCredential : RMAuthenticationCredential

@property (readonly, copy, nonatomic) NSString *authenticationScheme;
@property (readonly, copy, nonatomic) NSDictionary *properties;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithAuthenticationScheme:(id)a0 properties:(id)a1;
- (BOOL)isEqualToAuthenticationCredential:(id)a0;

@end
