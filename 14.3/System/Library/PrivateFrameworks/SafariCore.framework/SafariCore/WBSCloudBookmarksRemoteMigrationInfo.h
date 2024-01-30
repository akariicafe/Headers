@class NSString, NSDate;

@interface WBSCloudBookmarksRemoteMigrationInfo : NSObject

@property (readonly, nonatomic) long long migrationState;
@property (readonly, copy, nonatomic) NSString *migratorDeviceIdentifier;
@property (readonly, nonatomic) NSDate *serverModificationDate;

- (id)init;
- (void).cxx_destruct;
- (id)initWithMigrationState:(long long)a0 migratorDeviceIdentifier:(id)a1 serverModificationDate:(id)a2;

@end
