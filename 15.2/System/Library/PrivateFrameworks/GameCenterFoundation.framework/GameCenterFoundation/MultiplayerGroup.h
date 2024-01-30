@class NSString, NSSet, MultiplayerGroupList, NSNumber;

@interface MultiplayerGroup : NSManagedObject

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSNumber *numberOfAutomatched;
@property (copy, nonatomic) NSNumber *playedAt;
@property (retain, nonatomic) NSSet *entries;
@property (retain, nonatomic) MultiplayerGroupList *list;

+ (id)fetchRequest;

@end
