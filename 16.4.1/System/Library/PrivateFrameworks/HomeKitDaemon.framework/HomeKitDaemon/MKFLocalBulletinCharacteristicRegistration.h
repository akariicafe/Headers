@interface MKFLocalBulletinCharacteristicRegistration : MKFLocalBulletinAccessoryRegistration

@property (nonatomic) long long characteristicInstanceID;
@property (nonatomic) long long serviceInstanceID;

+ (id)fetchRequest;
+ (id)fetchCharacteristicRegistrationForAccessoryUUID:(id)a0 serviceInstanceID:(id)a1 characteristicInstanceID:(id)a2 managedObjectContext:(id)a3;

@end
