@class NSString;

@interface REMDatabaseMigrationAccountInfo : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long type;

- (BOOL)isCloudKit;
- (void).cxx_destruct;
- (id)initWithAccountType:(long long)a0 identifier:(id)a1 name:(id)a2;

@end
