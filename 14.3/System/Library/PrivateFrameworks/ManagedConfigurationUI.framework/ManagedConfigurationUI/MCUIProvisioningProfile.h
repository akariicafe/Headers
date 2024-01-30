@class NSString;

@interface MCUIProvisioningProfile : NSObject

@property (retain, nonatomic) NSString *allowedApplicationIdentifierEntitlement;
@property (retain, nonatomic) NSString *UUID;
@property (nonatomic) BOOL isAppleInternal;
@property (nonatomic) BOOL isBeta;
@property (nonatomic) BOOL isFreeDeveloperProvisioningProfile;
@property (nonatomic) BOOL isUniversalProvisioningProfile;

- (id)initWithProfile:(struct _MISProfile { } *)a0;
- (BOOL)allowsApplicationIdentifierEntitlement:(id)a0;
- (void).cxx_destruct;

@end
