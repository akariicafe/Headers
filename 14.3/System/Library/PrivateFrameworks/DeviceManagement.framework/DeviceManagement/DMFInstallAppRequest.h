@class NSNumber;

@interface DMFInstallAppRequest : DMFAppRequest

@property (nonatomic) unsigned long long licenseType;
@property (nonatomic) BOOL allowFreePurchases;
@property (copy, nonatomic) NSNumber *accountIdentifier;

+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (BOOL)isPermittedOnSystemConnection;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
