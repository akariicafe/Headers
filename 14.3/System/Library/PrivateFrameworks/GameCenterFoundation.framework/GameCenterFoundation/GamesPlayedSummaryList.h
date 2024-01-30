@class NSString, NSOrderedSet, NSDate, NSNumber;

@interface GamesPlayedSummaryList : NSManagedObject

@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *playerID;
@property (copy, nonatomic) NSNumber *withinSecs;
@property (retain, nonatomic) NSOrderedSet *entries;

+ (id)fetchRequest;

@end
