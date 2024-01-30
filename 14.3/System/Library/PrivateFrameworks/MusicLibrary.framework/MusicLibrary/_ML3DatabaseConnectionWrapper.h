@class NSThread, ML3DatabaseConnection;

@interface _ML3DatabaseConnectionWrapper : NSObject

@property (retain, nonatomic) ML3DatabaseConnection *connection;
@property (retain, nonatomic) NSThread *owningThread;
@property (retain, nonatomic) NSThread *borrowingThread;
@property (nonatomic) unsigned long long useCount;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0;
- (id)description;

@end
