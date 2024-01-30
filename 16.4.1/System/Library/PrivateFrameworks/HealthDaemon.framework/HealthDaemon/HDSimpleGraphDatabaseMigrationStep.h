@interface HDSimpleGraphDatabaseMigrationStep : NSObject

@property (readonly, nonatomic) long long toVersion;
@property (readonly, nonatomic) void /* function */ *function;

+ (id)migrationToVersion:(long long)a0 function:(void /* function */ *)a1;

- (id)description;

@end
