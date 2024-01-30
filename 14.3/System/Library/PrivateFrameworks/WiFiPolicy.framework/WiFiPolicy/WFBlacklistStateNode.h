@class NSString;

@interface WFBlacklistStateNode : NSObject

@property unsigned long long blacklistedState;
@property (copy) NSString *blacklistedStateString;
@property double blacklistedStateTimestamp;
@property unsigned long long blacklistedReason;
@property long long blacklistedReasonData;
@property (copy) NSString *blacklistedReasonString;

- (id)init;
- (void).cxx_destruct;

@end
