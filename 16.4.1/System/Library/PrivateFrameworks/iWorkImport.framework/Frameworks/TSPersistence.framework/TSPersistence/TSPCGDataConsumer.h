@class NSError, NSObject;
@protocol OS_dispatch_queue, TSUStreamWriteChannel;

@interface TSPCGDataConsumer : NSObject {
    NSObject<OS_dispatch_queue> *_writeQueue;
    id<TSUStreamWriteChannel> _writeChannel;
    NSError *_error;
}

+ (struct CGDataConsumer { } *)newCGDataConsumerForWriteChannel:(id)a0;

- (void)_close;
- (void)close;
- (id)init;
- (void).cxx_destruct;
- (unsigned long long)putBytes:(const void *)a0 count:(unsigned long long)a1;
- (id)initWithWriteChannel:(id)a0;

@end
