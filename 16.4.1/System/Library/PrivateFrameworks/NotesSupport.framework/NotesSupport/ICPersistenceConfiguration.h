@class NSManagedObjectContext;

@interface ICPersistenceConfiguration : NSObject

@property (retain, nonatomic) NSManagedObjectContext *modernViewContext;
@property (retain, nonatomic) NSManagedObjectContext *modernBackgroundContext;
@property (retain, nonatomic) NSManagedObjectContext *legacyViewContext;
@property (retain, nonatomic) NSManagedObjectContext *legacyBackgroundContext;

- (void).cxx_destruct;

@end
