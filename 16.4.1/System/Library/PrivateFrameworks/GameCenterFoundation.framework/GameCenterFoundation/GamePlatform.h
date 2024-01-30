@class NSString, NSSet;

@interface GamePlatform : NSManagedObject

@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSSet *game;
@property (retain, nonatomic) NSSet *gameInfo;

+ (id)fetchRequest;

@end
