@class NSObject;
@protocol OS_dispatch_queue;

@interface MSVCallback : NSObject

@property (copy, nonatomic) id block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)callbackWithQueue:(id)a0 block:(id)a1;

- (void)invoke;
- (void)invokeWithObject:(id)a0;
- (void).cxx_destruct;

@end
