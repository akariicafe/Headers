@class NSString, ML3DatabaseConnection;

@interface ML3PersistentIDGenerator : NSObject {
    ML3DatabaseConnection *_connection;
    NSString *_tableName;
    NSString *_validateStartingPersistentIdSQL;
    NSString *_nextUsedPersistentIdSQL;
    long long _currentPersistentID;
    long long _nextUsedPersistentID;
}

- (void).cxx_destruct;
- (void)_calculateNewRun;
- (id)initWithDatabaseConnection:(id)a0 tableName:(id)a1;
- (long long)nextPersistentID;

@end
