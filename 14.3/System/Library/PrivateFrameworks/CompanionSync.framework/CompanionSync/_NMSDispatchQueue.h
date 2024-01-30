@class NSObject;
@protocol OS_dispatch_queue;

@interface _NMSDispatchQueue : NSObject {
    NSObject<OS_dispatch_queue> *_q;
    _Atomic BOOL _r;
}

@property (readonly, nonatomic, getter=isSuspended) BOOL suspended;

- (void)sync:(id /* block */)a0;
- (void)async:(id /* block */)a0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resume;
- (void)suspend;
- (id)initWithName:(id)a0 attributes:(id)a1 target:(id)a2;

@end
