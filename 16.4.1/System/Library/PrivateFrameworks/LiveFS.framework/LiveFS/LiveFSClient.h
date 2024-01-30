@class NSXPCConnection;

@interface LiveFSClient : NSObject {
    NSXPCConnection *conn;
}

+ (id)interfaceForListeners;
+ (id)newConnectionForService:(id)a0;
+ (id)supportDirURL:(unsigned long long)a0 forURL:(id)a1 daemonPrefName:(id)a2 error:(id *)a3;

- (void)dealloc;
- (void).cxx_destruct;
- (id)listenerForVolume:(id)a0 error:(id *)a1;
- (id)forgetVolume:(id)a0 withFlags:(unsigned int)a1;
- (void)unlockVolume:(id)a0 password:(id)a1 saveToKeychain:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)volumes:(id *)a0;
- (void)listenerForVolume:(id)a0 completionHandler:(id /* block */)a1;
- (id)initConnectionForService:(id)a0;
- (id)terminateDevice:(id)a0;

@end
