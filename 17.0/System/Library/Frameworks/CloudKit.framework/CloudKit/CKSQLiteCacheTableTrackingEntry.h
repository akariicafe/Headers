@class NSString, NSNumber, NSDate;

@interface CKSQLiteCacheTableTrackingEntry : CKSQLiteTableEntry

@property (copy, nonatomic) NSString *tableName;
@property (retain, nonatomic) NSNumber *entryCount;
@property (retain, nonatomic) NSNumber *dataSize;
@property (retain, nonatomic) NSDate *oldestExpireDate;

- (void).cxx_destruct;

@end
