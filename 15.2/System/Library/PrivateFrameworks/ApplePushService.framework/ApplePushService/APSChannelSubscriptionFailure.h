@class NSString;

@interface APSChannelSubscriptionFailure : NSObject

@property (retain, nonatomic) NSString *channelID;
@property (nonatomic) int failureReason;

- (id)description;
- (void).cxx_destruct;

@end
