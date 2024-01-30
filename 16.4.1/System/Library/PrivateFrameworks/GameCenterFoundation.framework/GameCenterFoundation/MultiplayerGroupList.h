@class NSSet, NSDate;

@interface MultiplayerGroupList : NSManagedObject

@property (copy, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSSet *entries;

+ (id)fetchRequest;

@end
