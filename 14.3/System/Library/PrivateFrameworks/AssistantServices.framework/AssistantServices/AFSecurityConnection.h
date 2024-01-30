@class NSString, NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AFSecurityConnection : NSObject <AFSecurityService> {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)_invalidateConnection;
- (void)dealloc;
- (void)_processDataMap:(id)a0 usingProcedure:(long long)a1 completion:(id /* block */)a2;
- (void)_dispatchCallbackForProcessedData:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (oneway void)processDataMap:(id)a0 usingProcedure:(long long)a1 completion:(id /* block */)a2;
- (oneway void)processData:(id)a0 usingProcedure:(long long)a1 completion:(id /* block */)a2;
- (id)_connection;
- (void)_connectionInvalidated;
- (oneway void)setKeychainValue:(id)a0 forKey:(id)a1 accountIdentifier:(id)a2 completion:(id /* block */)a3;
- (void)_processData:(id)a0 usingProcedure:(long long)a1 completion:(id /* block */)a2;
- (void)_connectionInterrupted;
- (void)_dispatchCallbackForProcessedDataMap:(id)a0 errorMap:(id)a1 completion:(id /* block */)a2;
- (void)invalidate;

@end
