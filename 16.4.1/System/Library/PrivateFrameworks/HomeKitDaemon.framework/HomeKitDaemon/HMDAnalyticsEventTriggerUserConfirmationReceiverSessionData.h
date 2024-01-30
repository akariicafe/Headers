@class NSString;

@interface HMDAnalyticsEventTriggerUserConfirmationReceiverSessionData : HMFObject

@property unsigned long long timestamp;
@property unsigned long long userResponseDelay;
@property int resultErrorCode;
@property (copy, nonatomic) NSString *sessionID;

- (void).cxx_destruct;

@end
