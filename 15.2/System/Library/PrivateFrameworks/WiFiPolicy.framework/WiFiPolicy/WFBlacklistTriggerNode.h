@class NSString;

@interface WFBlacklistTriggerNode : NSObject

@property unsigned long long triggerReason;
@property long long triggerReasonData;
@property (copy) NSString *triggerReasonString;
@property double triggerReasonTimestamp;
@property (copy) NSString *bssid;

- (void).cxx_destruct;
- (id)init;

@end
