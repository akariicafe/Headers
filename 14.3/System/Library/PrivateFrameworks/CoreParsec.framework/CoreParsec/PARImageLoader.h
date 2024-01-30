@class NSURLSession, NSMutableDictionary, PARSearchClient, NSDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface PARImageLoader : NSObject {
    NSObject<OS_dispatch_queue> *_pendingQueue;
    NSMutableDictionary *_pendingRequests;
    NSURLSession *_urlSession;
    PARSearchClient *_client;
    NSObject<OS_dispatch_queue> *_mapQueue;
    NSDictionary *_imageMap;
    NSObject<OS_dispatch_queue> *_futureWaitQueue;
    NSObject<OS_dispatch_semaphore> *_futureWaitSemaphore;
}

- (id)initWithClient:(id)a0;
- (void).cxx_destruct;
- (id)_fetchImageData:(id)a0 timeoutInterval:(double)a1;
- (id)fetchImageData:(id)a0 timeoutInterval:(double)a1;

@end
