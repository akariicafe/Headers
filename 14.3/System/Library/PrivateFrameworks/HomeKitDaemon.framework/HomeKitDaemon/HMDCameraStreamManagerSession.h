@class HMFTimer, NSString, HMFMessage, HMDCameraStreamSessionID, NSNumber;
@protocol HMDCameraStreamControlManagerProtocol;

@interface HMDCameraStreamManagerSession : HMFObject

@property (readonly, nonatomic) id<HMDCameraStreamControlManagerProtocol> streamControlManager;
@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly, nonatomic) NSString *destinationID;
@property (readonly, nonatomic) HMFTimer *streamSetupTimer;
@property (readonly, nonatomic) NSString *streamShowingAppIdentifier;
@property (retain, nonatomic) NSNumber *slotIdentifier;
@property (retain, nonatomic) HMFMessage *currentMessage;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0 destinationID:(id)a1 streamShowingAppIdentifier:(id)a2 controlManager:(id)a3 setupWaitPeriod:(double)a4 timerFactory:(id /* block */)a5 error:(id *)a6;
- (id)initWithSessionID:(id)a0 destinationID:(id)a1 streamShowingAppIdentifier:(id)a2 controlManager:(id)a3 setupWaitPeriod:(double)a4 error:(id *)a5;

@end
