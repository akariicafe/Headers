@class NSError, NSObject;
@protocol OS_dispatch_queue, TSUStreamWriteChannel;

@interface TSPCGDataConsumer : NSObject {
    NSObject<OS_dispatch_queue> *_writeQueue;
    id<TSUStreamWriteChannel> _writeChannel;
    NSError *_error;
}

+ (struct CGDataConsumer { } *)newCGDataConsumerForWriteChannel:(id)a0;

- (id)init;
- (void)close;
- (void).cxx_destruct;
- (void)_close;
- (id)initWithWriteChannel:(id)a0;
- (unsigned long long)putBytes:(const void *)a0 count:(unsigned long long)a1;

@end
