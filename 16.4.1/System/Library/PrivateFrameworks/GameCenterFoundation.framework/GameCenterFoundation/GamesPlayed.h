@class NSString, NSSet, NSDate;

@interface GamesPlayed : NSManagedObject

@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSSet *entries;

+ (id)fetchRequest;

@end
