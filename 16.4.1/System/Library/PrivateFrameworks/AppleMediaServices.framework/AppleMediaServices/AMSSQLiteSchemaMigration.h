@class NSError, AMSSQLiteConnection;

@interface AMSSQLiteSchemaMigration : NSObject {
    AMSSQLiteConnection *_connection;
}

@property (readonly) NSError *error;
@property (readonly) BOOL success;

- (void)executeStatement:(id)a0;
- (id)initWithConnection:(id)a0;
- (void).cxx_destruct;
- (void)_executeStatement:(id)a0 canFailMigration:(BOOL)a1 bindings:(id /* block */)a2;
- (void)executeOptionalStatement:(id)a0;
- (void)executeOptionalStatement:(id)a0 bindings:(id /* block */)a1;
- (void)executeStatement:(id)a0 bindings:(id /* block */)a1;

@end
