@class NSNumber;

@interface CKSQLiteObjecArchiveRefcountTableEntry : CKSQLiteTableEntry

@property (retain, nonatomic) NSNumber *objectID;
@property (retain, nonatomic) NSNumber *refCount;

- (void).cxx_destruct;

@end
