@class NSObject, CKVConcurrentQueue;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CKVStreamManager : NSObject {
    CKVConcurrentQueue *_streamQueue;
    NSObject<OS_dispatch_semaphore> *_resourceSema;
    NSObject<OS_dispatch_semaphore> *_producerSignalSema;
    NSObject<OS_dispatch_semaphore> *_bufferLimitSema;
    double _openTimeout;
    double _initialConsumeTimeout;
    double _subsequentConsumeTimeout;
    double _produceTimeout;
    NSObject<OS_dispatch_queue> *_queue;
}

@property BOOL isOpen;
@property BOOL abort;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)closeStream;
- (id)initWithOpenTimeout:(double)a0 initialConsumeTimeout:(double)a1 subsequentConsumeTimeout:(double)a2 produceTimeout:(double)a3 bufferLimit:(long long)a4;
- (void)openStream:(id /* block */)a0;
- (BOOL)produceStream:(id)a0;
- (long long)consumeStreamWithBlock:(id /* block */)a0;
- (void)abortStream;

@end
