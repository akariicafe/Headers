@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PLKQueue : NSObject

@property int kQueue;
@property int fileDescriptor;
@property struct __CFRunLoopSource { } *kqueueDescriptorSource;
@property struct __CFFileDescriptor { } *kqueueDescriptorRef;
@property (copy) NSString *path;
@property (retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ kQueueBlock;
@property (nonatomic) BOOL enabled;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0 withDispatchQueue:(id)a1 withBlock:(id /* block */)a2;

@end
