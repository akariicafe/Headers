@class AMSSQLiteConnection;

@interface AMSSQLiteSchema : NSObject {
    AMSSQLiteConnection *_connection;
}

@property (readonly) long long currentUserVersion;

- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (BOOL)column:(id)a0 existsInTable:(id)a1;
- (void)_setUserVersion:(long long)a0;
- (BOOL)tableExists:(id)a0;
- (BOOL)migrateToVersion:(long long)a0 usingBlock:(id /* block */)a1;

@end
