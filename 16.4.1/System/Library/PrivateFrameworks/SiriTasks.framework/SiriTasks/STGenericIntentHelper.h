@class NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface STGenericIntentHelper : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableDictionary *handlers;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *siriResponseQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *waitForIntentCompleteSemaphore;

+ (id)sharedHelper;

- (id)init;
- (void).cxx_destruct;
- (void)handleSiriTask:(id)a0 withApplication:(id)a1;
- (void)_handleIntent:(id)a0 withTask:(id)a1 andApplication:(id)a2;
- (BOOL)_invokeHandlerForIntent:(id)a0;
- (void)finishedLaunching:(BOOL)a0;
- (void)forIntent:(id)a0 registerHandler:(id /* block */)a1;
- (void)forIntentParam:(id)a0 predict:(id)a1;

@end
