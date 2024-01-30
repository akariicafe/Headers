@class SSSQLiteDatabase;

@interface SSEventsTableBase : NSObject {
    SSSQLiteDatabase *_database;
}

+ (id)databasePath;

- (id)initWithDatabase:(id)a0;
- (void)performTransactionWithBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)_setupDatabase;

@end
