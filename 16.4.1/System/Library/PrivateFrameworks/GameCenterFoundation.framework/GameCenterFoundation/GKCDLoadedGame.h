@class NSString;

@interface GKCDLoadedGame : NSManagedObject

@property (copy, nonatomic) NSString *bundleId;

+ (id)fetchRequest;

@end
