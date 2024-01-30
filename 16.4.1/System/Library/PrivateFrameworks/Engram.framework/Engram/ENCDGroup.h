@class ENStableGroupID, ENGroupID, NSData;
@protocol ENCypher;

@interface ENCDGroup : NSManagedObject

@property (retain, nonatomic) id<ENCypher> cypher;
@property (retain, nonatomic) ENGroupID *groupID;
@property (retain, nonatomic) ENStableGroupID *stableGroupID;
@property (nonatomic) long long groupIDGeneration;
@property (retain, nonatomic) NSData *sharedApplicationData;

+ (id)fetchRequest;
+ (id)insertIntoManagedObjectContext:(id)a0;
+ (id)groupFromGroup:(id)a0 insertIntoManagedObjectContext:(id)a1;
+ (id)predicateForGroupID:(id)a0;
+ (id)predicateForGroupIDs:(id)a0;
+ (id)predicateForStableGroupID:(id)a0;

@end
