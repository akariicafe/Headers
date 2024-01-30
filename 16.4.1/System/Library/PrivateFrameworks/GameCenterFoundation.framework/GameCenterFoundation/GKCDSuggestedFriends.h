@class NSArray, NSDate;

@interface GKCDSuggestedFriends : NSManagedObject

@property (retain, nonatomic) NSArray *contactAssociationIDs;
@property (copy, nonatomic) NSDate *expirationDate;

+ (id)fetchRequest;

@end
