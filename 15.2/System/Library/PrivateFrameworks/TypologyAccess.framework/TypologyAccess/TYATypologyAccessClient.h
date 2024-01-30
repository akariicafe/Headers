@class NSXPCConnection;

@interface TYATypologyAccessClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)_disconnect;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_initializeConnection;
- (id)initWithAccessMode:(unsigned long long)a0;
- (void)_setTypologyAccessMode:(unsigned long long)a0;
- (void)enumerateTypologyLogs:(id /* block */)a0;
- (BOOL)removeTypologyFileWithURLHandle:(id)a0 error:(id *)a1;
- (BOOL)removeAllTypologyFilesWithError:(id *)a0;
- (BOOL)writeData:(id)a0 toTypologyFileWithName:(id)a1 error:(id *)a2;

@end
