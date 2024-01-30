@class BMXPCConnectionWrapper;

@interface _BMXPCFileManager : BMFileManager <BMFileManagerImpl> {
    unsigned long long _domain;
    BMXPCConnectionWrapper *_connectionWrapper;
}

+ (id)globalWeakConnectionCache;

- (id)_synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)_fileHandleForFileAtPath:(id)a0 flags:(int)a1 protection:(int)a2 error:(id *)a3;
- (id)_newConnectionForDomain:(unsigned long long)a0;
- (BOOL)replaceFileAtPath:(id)a0 withFileHandle:(id)a1 error:(id *)a2;
- (id)_connectionForDomain:(unsigned long long)a0;
- (void)_configureConnection:(id)a0;
- (id)initWithDirectory:(id)a0 cachingOptions:(long long)a1;
- (BOOL)_removeFileAtPath:(id)a0 error:(id *)a1;
- (BOOL)_removeDirectoryAtPath:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)_memoryMappingForFileAtPath:(id)a0 flags:(int)a1 error:(id *)a2;
- (id)temporaryFileHandleWithProtection:(int)a0 error:(id *)a1;

@end
