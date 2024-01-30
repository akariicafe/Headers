@class NSString;

@interface HMDAnalyticsEventTriggerUserConfirmationSendData : HMFObject

@property unsigned long long timestamp;
@property int resultErrorCode;
@property (copy, nonatomic) NSString *sessionID;

- (void).cxx_destruct;

@end
