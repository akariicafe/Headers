@class NSObject, NSString, NSArray, VCPMADServiceImageAsset, NSMutableArray;
@protocol OS_dispatch_queue;

@interface VCPMADServiceImageProcessingTask : VCPMABaseTask {
    NSArray *_requests;
    VCPMADServiceImageAsset *_asset;
    NSMutableArray *_subtasks;
    NSObject<OS_dispatch_queue> *_cancelQueue;
}

@property (retain, nonatomic) NSString *signpostPayload;

+ (id)taskWithRequests:(id)a0 forAsset:(id)a1 cancelBlock:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;

- (void)cancel;
- (void).cxx_destruct;
- (BOOL)run:(id *)a0;
- (BOOL)cachesResources;
- (id)initWithRequests:(id)a0 forAsset:(id)a1 cancelBlock:(id /* block */)a2 andCompletionHandler:(id /* block */)a3;

@end
