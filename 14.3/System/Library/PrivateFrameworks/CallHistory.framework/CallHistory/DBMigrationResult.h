@interface DBMigrationResult : NSObject

@property (nonatomic) long long errorCode;
@property (nonatomic) long long dbVersion;

- (id)initWithErrorCode:(long long)a0 andDBVersion:(long long)a1;

@end
