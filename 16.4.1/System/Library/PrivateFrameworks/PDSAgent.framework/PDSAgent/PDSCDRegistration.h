@class NSString, PDSCDUser;

@interface PDSCDRegistration : NSManagedObject

@property (copy, nonatomic) NSString *qualifier;
@property (retain, nonatomic) NSString *topic;
@property (copy, nonatomic) NSString *clientID;
@property (nonatomic) short entryState;
@property (nonatomic) short environment;
@property (retain, nonatomic) PDSCDUser *user;

+ (id)fetchRequest;
+ (id)activeRegistrations;
+ (id)insertIntoManagedObjectContext:(id)a0;
+ (id)registrationFromEntry:(id)a0 insertIntoManagedObjectContext:(id)a1;
+ (id)activeRegistrationsForClientID:(id)a0;
+ (id)uniquenessPredicateForEntry:(id)a0;
+ (id)registrationsWithState:(unsigned char)a0;
+ (id)pendingRegistrations;
+ (id)registrationsForClientID:(id)a0;

- (id)entryWithUserCache:(id)a0;

@end
