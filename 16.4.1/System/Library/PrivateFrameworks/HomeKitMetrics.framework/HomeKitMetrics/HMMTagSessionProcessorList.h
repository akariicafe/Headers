@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface HMMTagSessionProcessorList : NSObject <HMFActivityAssociating> {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (readonly, nonatomic) NSArray *processors;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithWorkQueue:(id)a0;
- (id)objectForChildActivity;
- (void)addProcessor:(id)a0;
- (void)removeProcessor:(id)a0;

@end
