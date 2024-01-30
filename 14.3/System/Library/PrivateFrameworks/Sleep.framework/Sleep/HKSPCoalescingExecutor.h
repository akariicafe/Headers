@class NSString, NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue;

@interface HKSPCoalescingExecutor : NSObject <HKSPExecutor>

@property (readonly, nonatomic) NSObject<OS_dispatch_source> *source;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, copy, nonatomic) id /* block */ block;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
