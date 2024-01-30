@class NSXPCConnection, ASDGatherLogsRequestOptions, NSObject;
@protocol OS_dispatch_queue;

@interface ASDGatherLogsRequest : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDGatherLogsRequestOptions *_options;
}

+ (void)clearHARFiles;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)createHARFileArchiveWithCompletionBlock:(id /* block */)a0;
- (void)createLogFileArchiveWithCompletionBlock:(id /* block */)a0;
- (void)gatherLogsWithCompletionBlock:(id /* block */)a0;

@end
