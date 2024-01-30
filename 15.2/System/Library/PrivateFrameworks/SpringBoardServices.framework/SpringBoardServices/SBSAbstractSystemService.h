@class SBSSystemServiceClient;

@interface SBSAbstractSystemService : SBSAbstractFacilityService

@property (readonly, nonatomic) SBSSystemServiceClient *client;

+ (Class)serviceFacilityClientClass;

@end
