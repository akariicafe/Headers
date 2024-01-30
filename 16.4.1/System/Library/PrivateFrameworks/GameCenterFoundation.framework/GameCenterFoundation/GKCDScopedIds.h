@class NSString;

@interface GKCDScopedIds : NSManagedObject

@property (copy, nonatomic) NSString *gameBundleId;
@property (copy, nonatomic) NSString *gamePlayerId;
@property (copy, nonatomic) NSString *playerId;
@property (copy, nonatomic) NSString *teamPlayerId;

+ (id)fetchRequest;

@end
