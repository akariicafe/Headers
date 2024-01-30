@class NSMutableDictionary, NSPointerArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTagDispatcher : NSObject <HMMTagDispatching>

@property (retain, nonatomic) NSMutableDictionary *tagObservers;
@property (retain, nonatomic) NSPointerArray *allTagProcessors;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) unsigned long long nextStaleCheckTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0;
- (id)initWithWorkQueue:(id)a0 startTime:(unsigned long long)a1;
- (void)registerTagObserver:(id)a0 forTags:(id)a1;
- (void)submitTaggedEvent:(id)a0 processorList:(id)a1;
- (void)unregisterTagObserver:(id)a0 forTags:(id)a1;

@end
