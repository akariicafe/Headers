@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface PPKVOObserver : NSObject {
    NSString *_name;
    NSString *_key;
    id _observee;
    id /* block */ _handler;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)observerWithName:(id)a0 object:(id)a1 key:(id)a2 handler:(id /* block */)a3;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;

@end
