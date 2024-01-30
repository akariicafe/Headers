@class NSArray;

@interface DMFSetAppAssociatedDomainsRequest : DMFAppRequest

@property (copy, nonatomic) NSArray *associatedDomains;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
