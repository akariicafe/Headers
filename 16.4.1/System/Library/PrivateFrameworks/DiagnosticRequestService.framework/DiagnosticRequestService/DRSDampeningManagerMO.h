@class DRSDampeningEnforcementSettingsMO, NSSet, DRSDampeningConfigurationMO;

@interface DRSDampeningManagerMO : NSManagedObject

@property (nonatomic) long long totalCap;
@property (retain, nonatomic) DRSDampeningConfigurationMO *defaultSignatureConfiguration;
@property (retain, nonatomic) DRSDampeningEnforcementSettingsMO *enforcementSettings;
@property (retain, nonatomic) NSSet *resourceConfigurations;
@property (retain, nonatomic) NSSet *teamConfigurations;

+ (id)fetchRequest;

@end
