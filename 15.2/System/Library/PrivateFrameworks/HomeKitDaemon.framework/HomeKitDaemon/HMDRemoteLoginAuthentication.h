@class NSString, HMDRemoteLoginMessageSender, NSObject, HMDDevice;
@protocol OS_dispatch_queue;

@interface HMDRemoteLoginAuthentication : HMFObject <HMFLogging>

@property (readonly, nonatomic) NSString *sessionID;
@property (readonly, nonatomic) HMDDevice *remoteDevice;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) HMDRemoteLoginMessageSender *remoteMessageSender;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

@end
