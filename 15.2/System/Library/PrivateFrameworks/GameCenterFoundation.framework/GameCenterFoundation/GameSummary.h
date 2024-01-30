@class NSString, NSSet, NSDate, NSNumber, GamesPlayedSummaryList;

@interface GameSummary : NSManagedObject

@property (copy, nonatomic) NSNumber *adamID;
@property (copy, nonatomic) NSString *bundleID;
@property (copy, nonatomic) NSNumber *isArcade;
@property (copy, nonatomic) NSDate *playedAt;
@property (retain, nonatomic) NSSet *compatiblePlatforms;
@property (retain, nonatomic) GamesPlayedSummaryList *list;

+ (id)fetchRequest;

@end
