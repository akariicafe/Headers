@class NSObject, NSError, NSXPCConnection;
@protocol OS_dispatch_semaphore;

@interface DIBaseXPCHandler : NSObject

@property (retain, nonatomic) id remoteProxy;
@property (retain, nonatomic) NSXPCConnection *connection;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSError *xpcError;
@property (nonatomic) BOOL isPrivileged;

- (void)closeConnection;
- (void)createConnection;
- (id)remoteObjectInterface;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (id)serviceName;
- (BOOL)connectWithError:(id *)a0;
- (BOOL)dupStderrWithError:(id *)a0;
- (void)signalCommandCompletedWithXpcError:(id)a0;
- (BOOL)completeCommandWithError:(id *)a0;

@end
