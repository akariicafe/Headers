@class NSUUID, HMFMessage, HMDTimerManagerTimerContext;

@interface HMDHomePrimaryResidentMessagingHandlerPendingMessageContext : NSObject

@property (readonly, nonatomic) HMFMessage *message;
@property (readonly, nonatomic) HMDTimerManagerTimerContext *messageTimerContext;
@property (retain, nonatomic) HMDTimerManagerTimerContext *queueTimerContext;
@property (retain, nonatomic) NSUUID *lastPrimaryResidentDestinationUUID;
@property (nonatomic, getter=isMessageInFlight) BOOL messageInFlight;
@property (copy, nonatomic) id /* block */ completionHandler;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0 messageTimerContext:(id)a1;

@end
