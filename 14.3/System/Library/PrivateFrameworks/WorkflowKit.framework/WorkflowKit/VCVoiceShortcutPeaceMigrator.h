@class WFDatabase;

@interface VCVoiceShortcutPeaceMigrator : NSObject

@property (readonly, nonatomic) WFDatabase *database;

+ (void)migrateFromCloudKitIntoDatabaseIfNecessary:(id)a0;

- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (BOOL)migrateWithError:(id *)a0;
- (BOOL)migrateObject:(id)a0 error:(id *)a1;
- (BOOL)saveRecord:(id)a0 withIdentifier:(id)a1 error:(id *)a2;

@end
