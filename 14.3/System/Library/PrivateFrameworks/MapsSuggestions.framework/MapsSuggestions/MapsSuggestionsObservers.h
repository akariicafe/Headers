@class NSString, NSHashTable, NSObject;
@protocol OS_dispatch_queue;

@interface MapsSuggestionsObservers : NSObject <MapsSuggestionsObject> {
    NSString *_name;
    struct Queue { NSObject<OS_dispatch_queue> *_innerQueue; NSString *_name; } _callbackQueue;
    NSHashTable *_innerObservers;
}

@property (readonly, nonatomic) NSString *uniqueName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCallbackQueue:(id)a0 name:(id)a1;
- (BOOL)synchronouslyCallBlock:(id /* block */)a0;
- (id)initWithCallbackQueue:(id)a0 name:(id)a1 strong:(BOOL)a2;
- (BOOL)callBlock:(id /* block */)a0;
- (void)addObserver:(id)a0 handler:(id /* block */)a1;
- (id).cxx_construct;
- (unsigned long long)count;
- (void)removeObserver:(id)a0 handler:(id /* block */)a1;
- (id)initWithName:(id)a0;

@end
