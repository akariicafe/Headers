@class NSObject, NSXPCConnection;
@protocol OS_dispatch_queue;

@interface AMSHTTPArchiveService : NSObject

@property (retain, nonatomic) NSXPCConnection *connection;
@property (copy, nonatomic) id /* block */ errorHandler;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)_sharedProxy;
+ (void)recordTrafficWithTaskInfo:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)_removeRemoteConnection;
- (void)dealloc;
- (id)_createRemoteConnection;
- (id)_createProxy;

@end
