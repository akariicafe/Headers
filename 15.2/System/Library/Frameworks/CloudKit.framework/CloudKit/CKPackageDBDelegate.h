@interface CKPackageDBDelegate : NSObject <CKSQLiteDelegate>

@property (readonly, nonatomic) int userVersion;

- (BOOL)migrateDatabase:(id)a0 fromVersion:(int)a1;

@end
