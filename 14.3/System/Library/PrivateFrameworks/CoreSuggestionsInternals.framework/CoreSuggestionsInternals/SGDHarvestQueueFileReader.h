@class NSObject;
@protocol OS_dispatch_queue, OS_dispatch_io;

@interface SGDHarvestQueueFileReader : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_io> *_io;
}

@property (readonly, nonatomic) int fileId;

- (void).cxx_destruct;
- (void)dealloc;
- (void)read:(struct { int x0; int x1; unsigned int x2; })a0 callback:(id /* block */)a1;
- (id)initWithDirectory:(id)a0 fileId:(int)a1 tryLater:(BOOL *)a2;
- (void)_performAbstractIo:(id /* block */)a0 chunk:(struct { int x0; int x1; unsigned int x2; })a1 withCallback:(id /* block */)a2;

@end
