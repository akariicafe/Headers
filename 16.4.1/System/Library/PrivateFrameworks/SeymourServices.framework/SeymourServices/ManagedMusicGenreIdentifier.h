@class NSString, NSSet;

@interface ManagedMusicGenreIdentifier : NSManagedObject

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, retain) NSSet *catalogProgramMusicGenres;
@property (nonatomic, retain) NSSet *catalogWorkoutMusicGenres;

- (id)initWithEntity:(id)a0 insertIntoManagedObjectContext:(id)a1;

@end
