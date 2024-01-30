@class NSNumber;

@interface DMFSetAppAssociatedDomainsEnableDirectDownloadsRequest : DMFAppRequest

@property (copy, nonatomic) NSNumber *associatedDomainsEnableDirectDownloads;

+ (BOOL)isPermittedOnUserConnection;
+ (BOOL)supportsSecureCoding;
+ (BOOL)isPermittedOnSystemConnection;
+ (id)permittedPlatforms;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;

@end
