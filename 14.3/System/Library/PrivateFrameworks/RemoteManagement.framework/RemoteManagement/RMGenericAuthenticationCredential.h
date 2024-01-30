@class NSString, NSDictionary;

@interface RMGenericAuthenticationCredential : RMAuthenticationCredential

@property (readonly, copy, nonatomic) NSString *authenticationScheme;
@property (readonly, copy, nonatomic) NSDictionary *properties;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;
- (void)encodeWithCoder:(id)a0;
- (id)initWithAuthenticationScheme:(id)a0 properties:(id)a1;
- (BOOL)isEqualToAuthenticationCredential:(id)a0;

@end
