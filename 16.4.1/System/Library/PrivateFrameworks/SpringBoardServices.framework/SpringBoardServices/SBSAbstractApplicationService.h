@class SBSApplicationClient;

@interface SBSAbstractApplicationService : SBSAbstractFacilityService

@property (readonly, nonatomic) SBSApplicationClient *client;

+ (Class)serviceFacilityClientClass;

@end
