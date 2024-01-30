@class NSSet, NSDate;

@interface GKCDGameAccessList : NSManagedObject

@property (copy, nonatomic) NSDate *expirationDate;
@property (retain, nonatomic) NSSet *entries;

+ (id)fetchRequest;

@end
