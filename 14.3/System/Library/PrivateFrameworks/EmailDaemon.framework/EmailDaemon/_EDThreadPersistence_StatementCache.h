@class NSMutableDictionary, EDPersistenceDatabaseConnection;

@interface _EDThreadPersistence_StatementCache : NSObject

@property (readonly, nonatomic) NSMutableDictionary *preparedStatements;
@property (readonly, nonatomic) EDPersistenceDatabaseConnection *connection;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)preparedStatementForQueryString:(id)a0;

@end
