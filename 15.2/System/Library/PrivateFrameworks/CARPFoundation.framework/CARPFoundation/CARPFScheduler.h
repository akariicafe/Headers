@class NSOperationQueue;

@interface CARPFScheduler : CARPFObject {
    NSOperationQueue *_operationQueue;
}

+ (id)defaultScheduler;
+ (id)mainScheduler;

- (id)initWithQueue:(id)a0;
- (id)performBlock:(id /* block */)a0;
- (id)performSelector:(SEL)a0 target:(id)a1 argument:(id)a2;
- (void).cxx_destruct;
- (id)init;
- (id)performOperation:(id)a0;
- (id)performSelector:(SEL)a0 target:(id)a1 argument:(id)a2 qualityOfService:(long long)a3;
- (id)performWithQualityOfService:(long long)a0 block:(id /* block */)a1;

@end
