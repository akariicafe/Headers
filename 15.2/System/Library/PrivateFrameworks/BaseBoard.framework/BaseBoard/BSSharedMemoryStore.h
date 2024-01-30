@class NSString, NSObject;
@protocol BSSharedMemoryStoreData, OS_dispatch_queue;

@interface BSSharedMemoryStore : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_basePath;
    struct { char path[32]; char offset; } _queue_path;
    id<BSSharedMemoryStoreData> _queue_data;
    unsigned char _queue_lastState;
    unsigned char _queue_nextWriteFailure;
    BOOL _queue_writeFailedOnce;
    BOOL _queue_invalidated;
}

@property (readonly, nonatomic) unsigned char _lastState;
@property (copy, nonatomic) id<BSSharedMemoryStoreData> data;

+ (id)deserializeDataOfClass:(Class)a0 withSerializedFromData:(id)a1;
+ (void)_unlinkAllForIdentifier:(id)a0;

- (void)_setFailureModeForNextWrite:(unsigned char)a0;
- (id)initWithIdentifier:(id)a0 dataClass:(Class)a1;
- (void).cxx_destruct;
- (id)init;
- (void)invalidate;
- (void)dealloc;

@end
