@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_io;

@interface SGDHarvestQueueFileWriter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_io> *_io;
    int _offset;
}

@property (readonly, nonatomic) unsigned long long bytesWritten;
@property (readonly, nonatomic) int fileId;

- (void)write:(id)a0 callback:(id /* block */)a1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDirectory:(id)a0 fileId:(int)a1;
- (void)writeEnumerator:(id)a0 callback:(id /* block */)a1;

@end
