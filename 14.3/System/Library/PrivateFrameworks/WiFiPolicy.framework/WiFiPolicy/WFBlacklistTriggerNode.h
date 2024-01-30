@class NSString;

@interface WFBlacklistTriggerNode : NSObject

@property unsigned long long triggerReason;
@property long long triggerReasonData;
@property (copy) NSString *triggerReasonString;
@property double triggerReasonTimestamp;
@property (copy) NSString *bssid;

- (id)init;
- (void).cxx_destruct;

@end
