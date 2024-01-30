@class NSUUID, HMDHome, NSNotificationCenter, NSString, HMFMessageDispatcher, NSObject, HMBCloudZone, HMBLocalZone, HMDCameraClipFeedbackUploader;
@protocol OS_dispatch_queue;

@interface HMDCameraClipFeedbackManager : HMFObject <HMFLogging, HMFMessageReceiver>

@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly) HMBLocalZone *localZone;
@property (readonly) HMBCloudZone *cloudZone;
@property (readonly) HMFMessageDispatcher *messageDispatcher;
@property (readonly) HMDCameraClipFeedbackUploader *feedbackUploader;
@property (readonly, copy) NSUUID *cameraProfileUUID;
@property (readonly) HMDHome *home;
@property (readonly) NSNotificationCenter *notificationCenter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (BOOL)isCurrentDeviceConfirmedPrimaryResident;
- (void)handlePrimaryResidentUpdateNotification:(id)a0;
- (id)_performCloudPull;
- (void)configureWithHome:(id)a0 deviceIsResidentCapable:(BOOL)a1;
- (id)initWithLocalZone:(id)a0 cloudZone:(id)a1 home:(id)a2 messageDispatcher:(id)a3 cameraProfileUUID:(id)a4 messageTargetUUID:(id)a5 feedbackUploader:(id)a6 workQueue:(id)a7;
- (void)findAndUploadSubmittedClips;
- (void)_uploadNextClipFromQueryResult:(id)a0;
- (void)_handleFindAndUploadSubmittedClipsMessage:(id)a0;
- (void)_handleSubmitClipsMessage:(id)a0;
- (void)_notifyPrimaryResidentThatClipsWereSubmitted;

@end
