@class NSString, NSXPCListener, BMFileManager;

@interface BMFileServer : NSObject <NSXPCListenerDelegate, BMFileServer> {
    NSXPCListener *_listener;
    NSString *_directory;
    BMFileManager *_fileManager;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 reply:(id /* block */)a3;
- (BOOL)listener:(id)a0 shouldAcceptNewConnection:(id)a1;
- (void)removeFileAtPath:(id)a0 reply:(id /* block */)a1;
- (void)temporaryFileHandleWithProtection:(int)a0 reply:(id /* block */)a1;
- (BOOL)entitledToAccessStream:(id)a0 withMode:(int)a1 error:(id *)a2;
- (void)sharedMemoryForFileAtPath:(id)a0 flags:(int)a1 reply:(id /* block */)a2;
- (BOOL)entitledToAccessClientCompute:(id)a0 error:(id *)a1;
- (id)initWithDirectory:(id)a0;
- (void)_configureConnection:(id)a0;
- (void)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 reply:(id /* block */)a2;
- (id)_initWithListener:(id)a0 directory:(id)a1;
- (void)removeDirectoryAtPath:(id)a0 reply:(id /* block */)a1;
- (void)createDirectoryAtPath:(id)a0 reply:(id /* block */)a1;
- (void).cxx_destruct;

@end
