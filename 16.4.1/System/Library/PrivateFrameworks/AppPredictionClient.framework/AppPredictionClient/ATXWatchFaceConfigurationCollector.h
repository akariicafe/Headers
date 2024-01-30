@class NSArray, NSXPCConnection, ATXGenericFileBasedCache, NSObject;
@protocol OS_dispatch_queue;

@interface ATXWatchFaceConfigurationCollector : NSObject {
    ATXGenericFileBasedCache *_fileCache;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_outputQueue;
    NSArray *_queue_watchFaces;
}

@property (readonly, copy, nonatomic) NSArray *watchFaces;

+ (id)sharedInstance;
+ (id)_watchFaceFromJSONObject:(id)a0;

- (void)refreshWithCompletion:(id /* block */)a0;
- (id)init;
- (id)_queue_readWatchFacesFromDisk;
- (void)_queue_writeWatchFacesToDisk:(id)a0;
- (void).cxx_destruct;

@end
