@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface ASDDispatchQueue : NSObject <ASDTaskScheduler> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (class, readonly) ASDDispatchQueue *defaultQueue;

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)asyncUsingBlock:(id /* block */)a0;
- (id)initWithName:(id)a0;
- (void)scheduleBlock:(id /* block */)a0;
- (id)init;
- (void)assertQueue;
- (void)syncUsingBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;

@end
