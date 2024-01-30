@class SSSQLiteDatabase;

@interface SSEventsTableBase : NSObject {
    SSSQLiteDatabase *_database;
}

+ (id)databasePath;

- (id)init;
- (void).cxx_destruct;
- (id)initWithDatabase:(id)a0;
- (void)performTransactionWithBlock:(id /* block */)a0;
- (BOOL)_setupDatabase;

@end
