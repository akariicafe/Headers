@class NSXPCConnection, ASDGatherLogsRequestOptions, NSObject;
@protocol OS_dispatch_queue;

@interface ASDGatherLogsRequest : NSObject {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSObject<OS_dispatch_queue> *_calloutQueue;
    NSXPCConnection *_connection;
    ASDGatherLogsRequestOptions *_options;
}

+ (long long)requestType;
+ (void)_clearHARFiles;
+ (id)_harLogsDirectory;
+ (void)clearHARFiles;

- (id)initWithOptions:(id)a0;
- (void).cxx_destruct;
- (void)_sendRequestWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)_sendHarFileRequestWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)_sendGatherRequestWithOptions:(id)a0 completionBlock:(id /* block */)a1;
- (void)_combineLogs:(id)a0 toDir:(id)a1;
- (void)_copyDB:(id)a0 fullSourcePath:(id)a1 toDir:(id)a2 datbaseBase:(id)a3;
- (id)_appstoredContainerPath;
- (id)_zippedDataForURL:(id)a0;
- (id)_combineAllLogs;
- (id)_createCombinedHarFile;
- (void)createLogFileArchiveWithCompletionBlock:(id /* block */)a0;
- (void)createHARFileArchiveWithCompletionBlock:(id /* block */)a0;
- (void)gatherLogsWithCompletionBlock:(id /* block */)a0;

@end
