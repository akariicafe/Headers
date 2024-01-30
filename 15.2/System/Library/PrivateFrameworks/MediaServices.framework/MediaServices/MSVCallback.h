@class NSObject;
@protocol OS_dispatch_queue;

@interface MSVCallback : NSObject

@property (copy, nonatomic) id block;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;

+ (id)callbackWithQueue:(id)a0 block:(id)a1;

- (void)invoke;
- (void).cxx_destruct;
- (void)invokeWithObject:(id)a0;

@end
