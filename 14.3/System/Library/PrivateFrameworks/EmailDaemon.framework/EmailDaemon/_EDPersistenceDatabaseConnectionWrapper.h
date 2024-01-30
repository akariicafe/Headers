@class EFResource, EDPersistenceDatabaseConnection;

@interface _EDPersistenceDatabaseConnectionWrapper : NSObject

@property (retain, nonatomic) EFResource *resource;
@property (readonly, nonatomic) EDPersistenceDatabaseConnection *connection;
@property (readonly, nonatomic) unsigned long long generation;
@property (nonatomic) unsigned long long type;

- (void).cxx_destruct;
- (id)initWithConnection:(id)a0 generation:(unsigned long long)a1;

@end
