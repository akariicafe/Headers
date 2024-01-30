@interface MKFLocalBulletinCameraSignificantEventRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) long long notificationModes;
@property (nonatomic) long long personFamiliarityOptions;
@property (nonatomic) long long significantEventTypes;

+ (id)fetchRequest;

@end
