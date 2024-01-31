@class NSDate;

@interface CKSQLiteCacheTableEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSDate *expirationDate;

- (void).cxx_destruct;

@end
