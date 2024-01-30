@class _PASSqliteDatabase, NSMutableArray;

@interface PPSQLDatabaseHandlePool : NSObject {
    _PASSqliteDatabase *readWriteHandle;
    NSMutableArray *availableReadOnlyHandles;
    unsigned long long totalReadOnlyHandles;
}

- (void).cxx_destruct;

@end
