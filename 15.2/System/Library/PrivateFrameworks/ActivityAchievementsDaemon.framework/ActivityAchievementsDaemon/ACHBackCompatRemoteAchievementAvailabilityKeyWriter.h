@class HDProfile;

@interface ACHBackCompatRemoteAchievementAvailabilityKeyWriter : NSObject

@property (readonly, weak, nonatomic) HDProfile *profile;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (BOOL)markTemplateAvailable:(id)a0 error:(id *)a1;
- (id)companionAvailabilityStateKeyFromUniqueName:(id)a0;

@end
