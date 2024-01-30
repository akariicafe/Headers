@class NSDictionary;

@interface PMLTrainingDatabaseMigrations : NSObject

@property (readonly, nonatomic) NSDictionary *migrations;
@property (readonly, nonatomic) unsigned int maxVersion;

+ (id)skipFromZeroSchema:(unsigned int *)a0;
+ (id)mockMigrationsByAddingQueries:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (unsigned int)maxVersion;
- (id)initWithMigrations:(id)a0;

@end
