@class NSError, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface AKPromise : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _completed;
    id _value;
    NSError *_error;
    NSMutableArray *_callbacks;
}

- (id)initWithError:(id)a0;
- (id)then:(id /* block */)a0;
- (id)catch:(id /* block */)a0;
- (void).cxx_destruct;
- (id)_chain:(id /* block */)a0;
- (void)_startWithBlock:(id /* block */)a0;
- (void)_completeWithValue:(id)a0 error:(id)a1;
- (void)onComplete:(id /* block */)a0;
- (id)initWithBlock:(id /* block */)a0;
- (id)initWithValue:(id)a0;

@end
