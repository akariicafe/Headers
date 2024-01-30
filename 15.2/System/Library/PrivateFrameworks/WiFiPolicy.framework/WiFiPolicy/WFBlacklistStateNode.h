@class NSString;

@interface WFBlacklistStateNode : NSObject

@property unsigned long long blacklistedState;
@property (copy) NSString *blacklistedStateString;
@property double blacklistedStateTimestamp;
@property unsigned long long blacklistedReason;
@property long long blacklistedReasonData;
@property (copy) NSString *blacklistedReasonString;

- (void).cxx_destruct;
- (id)init;

@end
