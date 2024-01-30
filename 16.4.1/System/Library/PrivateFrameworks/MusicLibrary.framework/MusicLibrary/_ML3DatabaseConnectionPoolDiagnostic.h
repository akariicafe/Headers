@class NSArray;

@interface _ML3DatabaseConnectionPoolDiagnostic : NSObject <NSMutableCopying>

@property (readonly, nonatomic) NSArray *readerAvailableConnections;
@property (readonly, nonatomic) NSArray *readerBusyConnections;
@property (readonly, nonatomic) NSArray *writerAvailableConnections;
@property (readonly, nonatomic) NSArray *writerBusyConnections;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (id)_copyWithZone:(struct _NSZone { } *)a0 usingConcreteClass:(Class)a1;

@end
