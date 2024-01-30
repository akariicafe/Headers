@class NSString;

@interface ManagedMusicGenre : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *name;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
