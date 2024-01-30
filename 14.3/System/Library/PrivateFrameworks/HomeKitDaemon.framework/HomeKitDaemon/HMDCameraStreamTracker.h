@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraStreamTracker : HMFObject <HMFLogging>

@property (retain, nonatomic) NSMutableSet *currentStreamIdentifiers;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedTracker;

@end
