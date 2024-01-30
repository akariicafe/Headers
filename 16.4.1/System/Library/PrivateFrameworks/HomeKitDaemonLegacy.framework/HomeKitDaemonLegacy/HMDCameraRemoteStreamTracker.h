@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraRemoteStreamTracker : HMFObject <HMFLogging>

@property (class, readonly) HMDCameraRemoteStreamTracker *sharedTracker;

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) NSMutableSet *currentStreamIdentifiers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
