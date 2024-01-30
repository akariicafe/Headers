@class NSString;

@interface MultiplayerGroupParticipant : NSManagedObject

@property (copy, nonatomic) NSString *playerID;

+ (id)fetchRequest;

@end
