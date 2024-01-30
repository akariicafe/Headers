@class NSString, NSMutableSet, AWDObserver, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface SymptomsAWDObserver : NSObject <AWDObserverDelegate>

@property (retain, nonatomic) AWDObserver *awdObserver;
@property (retain, nonatomic) NSMutableArray *delegates;
@property (retain, nonatomic) NSMutableSet *combinedEvents;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)updateAWDObserverRegistrationOnQueueWithCompletion:(id /* block */)a0 completionQueue:(id)a1;
- (id)init;
- (void)removeDelegate:(id)a0 withQueue:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (void)dealloc;
- (void)observer:(id)a0 handleEvent:(id)a1;
- (void)addDelegate:(id)a0 forEvents:(id)a1 withQueue:(id)a2 completion:(id /* block */)a3;

@end
