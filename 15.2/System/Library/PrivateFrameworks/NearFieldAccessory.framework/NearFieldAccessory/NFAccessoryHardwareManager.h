@class NSString, NSMutableSet, NSXPCConnection;

@interface NFAccessoryHardwareManager : NSObject <NSXPCConnectionDelegate> {
    NSXPCConnection *_connection;
    NSMutableSet *_sessions;
    unsigned long long _refCount;
    unsigned int _hwSupport;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedHardwareManager;

- (BOOL)connect;
- (id)getPowerCounters:(id *)a0;
- (id)startReaderSession:(id /* block */)a0;
- (void)disconnect;
- (id)synchronousRemoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (void)sessionDidEnd:(id)a0;
- (void).cxx_destruct;
- (id)pushSignedRF:(id)a0;
- (id)init;
- (void)_connectIfNeeded;
- (void)dealloc;
- (id)remoteObjectProxyWithErrorHandler:(id /* block */)a0;
- (id)getInfo;
- (BOOL)triggerDelayedWake:(unsigned char)a0;
- (void)didInvalidateXPCConnection:(id)a0;
- (void)didInterruptXPCConnection:(id)a0;
- (id)enableMultiTag:(BOOL)a0;
- (id)getMultiTagState:(id *)a0;
- (id)clearMultiTagState;
- (id)getDieId:(id *)a0;
- (id)getRfSettings:(id *)a0;
- (id)getLastDetectedTags:(id *)a0;
- (id)updateHWSupport:(BOOL)a0;
- (id)enableLPCD:(BOOL)a0;
- (BOOL)shutdownAndLeaveHWEnabled:(BOOL)a0;
- (unsigned int)getHwSupport:(BOOL)a0 error:(id *)a1;

@end
