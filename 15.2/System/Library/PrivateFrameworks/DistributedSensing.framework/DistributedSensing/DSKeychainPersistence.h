@class NSObject;
@protocol OS_dispatch_queue;

@interface DSKeychainPersistence : NSObject {
    NSObject<OS_dispatch_queue> *_clientQueue;
}

- (id)initWithQueue:(id)a0;
- (void).cxx_destruct;
- (BOOL)saveListenerState:(id)a0 withError:(id *)a1;
- (BOOL)loadListenerState:(id *)a0 withError:(id *)a1;
- (BOOL)removeListenerState:(id)a0 withError:(id *)a1;

@end
