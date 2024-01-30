@class NSString, NSSet;

@interface PDSCDUser : NSManagedObject

@property (copy, nonatomic) NSString *userID;
@property (nonatomic) short userType;
@property (retain, nonatomic) NSSet *registrations;

+ (id)userFromUser:(id)a0 insertIntoManagedObjectContext:(id)a1;
+ (id)fetchRequest;
+ (id)predicateForUserID:(id)a0 userType:(short)a1;
+ (id)insertIntoManagedObjectContext:(id)a0;

- (id)user;

@end
