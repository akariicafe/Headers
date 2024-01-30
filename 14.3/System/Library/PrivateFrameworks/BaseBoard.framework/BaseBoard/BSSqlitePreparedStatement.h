@class BSSqliteDatabaseConnection;

@interface BSSqlitePreparedStatement : NSObject {
    BSSqliteDatabaseConnection *_dbConnection;
}

- (id)init;
- (BOOL)executeWithBindings:(id)a0 resultRowHandler:(id /* block */)a1 error:(out id *)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
