@class NSXPCConnection;

@interface TYATypologyAccessClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;

- (void)_disconnect;
- (void)_initializeConnection;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_setTypologyAccessMode:(unsigned long long)a0;
- (void)enumerateTypologyLogs:(id /* block */)a0;
- (id)initWithAccessMode:(unsigned long long)a0;
- (BOOL)removeAllTypologyFilesWithError:(id *)a0;
- (BOOL)removeTypologyFileWithURLHandle:(id)a0 error:(id *)a1;
- (BOOL)writeData:(id)a0 toTypologyFileWithName:(id)a1 error:(id *)a2;

@end
