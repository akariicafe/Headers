@class NSSet;

@interface MKFLocalBulletinRegistration : NSManagedObject

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSSet *conditions;

+ (id)fetchRequest;

@end
