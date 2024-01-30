@class NSArray, NSString;

@interface FCModifyNotificationsForChannelsCommand : FCCommand

@property (copy, nonatomic) NSArray *channelIDsToAdd;
@property (copy, nonatomic) NSArray *paidChannelIDsToAdd;
@property (copy, nonatomic) NSArray *channelIDsToRemove;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *deviceToken;
@property (copy, nonatomic) NSString *storefrontID;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithChannelIDsToAdd:(id)a0 paidChannelIDsToAdd:(id)a1 channelIDsToRemove:(id)a2 userID:(id)a3 deviceToken:(id)a4 storefrontID:(id)a5;
- (BOOL)canCoalesceWithCommand:(id)a0;
- (void)coalesceWithCommand:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)executeWithContext:(id)a0 delegate:(id)a1 qualityOfService:(long long)a2;
- (void)encodeWithCoder:(id)a0;

@end
