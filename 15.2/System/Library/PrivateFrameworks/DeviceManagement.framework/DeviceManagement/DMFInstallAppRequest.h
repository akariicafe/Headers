@class NSNumber;

@interface DMFInstallAppRequest : DMFAppRequest

@property (nonatomic) unsigned long long licenseType;
@property (nonatomic) BOOL allowFreePurchases;
@property (copy, nonatomic) NSNumber *accountIdentifier;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
