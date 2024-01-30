@class SSSQLiteDatabase;

@interface SSEventsTableBase : NSObject {
    SSSQLiteDatabase *_database;
}

+ (id)databasePath;

- (BOOL)_setupDatabase;
- (void)performTransactionWithBlock:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;

@end
