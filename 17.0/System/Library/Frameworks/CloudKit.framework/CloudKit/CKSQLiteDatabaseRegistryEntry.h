@class NSNumber, NSData, NSString;

@interface CKSQLiteDatabaseRegistryEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *databaseID;
@property (retain, nonatomic) NSData *uniquingKey;
@property (retain, nonatomic) NSString *databaseDirectory;

- (void).cxx_destruct;

@end
