@class NSUUID, MKFLocalPersonClassificationSettings;

@interface MKFLocalPersonClassificationRegistration : HMDManagedObject

@property (nonatomic) BOOL enabled;
@property (copy, nonatomic) NSUUID *personUUID;
@property (retain, nonatomic) MKFLocalPersonClassificationSettings *settings;

+ (id)fetchRequest;
+ (id)fetchPersonClassificationRegistrationForPersonUUID:(id)a0 settingsModelUUID:(id)a1 managedObjectContext:(id)a2;

@end
