@class NSString, NSMutableSet, NSObject;
@protocol OS_dispatch_queue;

@interface HMDCameraPowerAssertionHandler : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSMutableSet *currentRequestHandlerSessionIDs;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (nonatomic) unsigned int powerAssertion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)sharedHandler;

@end
