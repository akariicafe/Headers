@class CKSQLiteDatabase;

@interface CKSQLiteDatabaseTable : CKSQLiteTable {
    CKSQLiteDatabase *_unsafeUnretainedDb;
}

@property (nonatomic) CKSQLiteDatabase *db;

@end
