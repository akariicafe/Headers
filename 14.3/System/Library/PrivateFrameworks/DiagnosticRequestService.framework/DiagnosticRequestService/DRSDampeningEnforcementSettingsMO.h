@class DRSDampeningManagerMO;

@interface DRSDampeningEnforcementSettingsMO : NSManagedObject

@property (nonatomic) BOOL enforcesResourceCap;
@property (nonatomic) BOOL enforcesResourceDownsampling;
@property (nonatomic) BOOL enforcesResourceHysteresis;
@property (nonatomic) BOOL enforcesSignatureCap;
@property (nonatomic) BOOL enforcesSignatureDownsampling;
@property (nonatomic) BOOL enforcesSignatureHysteresis;
@property (nonatomic) BOOL enforcesTotalCap;
@property (retain, nonatomic) DRSDampeningManagerMO *parentDampeningManager;

+ (id)fetchRequest;

@end
