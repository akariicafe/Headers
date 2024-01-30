@class HMFTimer, NSString, NSNumber, HMFMessage, HMDCameraStreamSessionID, HMDProcessInfo;
@protocol HMDCameraStreamControlManagerProtocol;

@interface HMDCameraStreamManagerSession : HMFObject <HMFLogging>

@property (readonly) HMDCameraStreamSessionID *sessionID;
@property (readonly, copy) NSString *destinationID;
@property (readonly) HMDProcessInfo *streamClientProcessInfo;
@property (readonly) id<HMDCameraStreamControlManagerProtocol> streamControlManager;
@property (readonly) HMFTimer *streamSetupTimer;
@property (copy) NSNumber *slotIdentifier;
@property (retain) HMFMessage *currentMessage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (id)logIdentifier;
- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 destinationID:(id)a1 streamClientProcessInfo:(id)a2 streamControlManager:(id)a3 setupWaitPeriod:(double)a4;
- (id)initWithSessionID:(id)a0 destinationID:(id)a1 streamClientProcessInfo:(id)a2 streamControlManager:(id)a3 streamSetupTimer:(id)a4;
- (BOOL)canStartWithError:(id *)a0;

@end
