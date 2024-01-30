@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSHTTPArchiveService : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (void)recordTrafficWithTaskInfo:(id)a0;
+ (id)_sharedProxy;

- (id)_createRemoteConnection;
- (void)dealloc;
- (void)_removeRemoteConnection;
- (id)_createProxy;
- (id)init;
- (void).cxx_destruct;

@end
