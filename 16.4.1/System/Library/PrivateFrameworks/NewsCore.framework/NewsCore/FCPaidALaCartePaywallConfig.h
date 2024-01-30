@class NSString;

@interface FCPaidALaCartePaywallConfig : NSObject <NSCopying>

@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *channelPaywallTitle;
@property (copy, nonatomic) NSString *hardPaywallTitle;
@property (copy, nonatomic) NSString *leakyPaywallTitle;
@property (copy, nonatomic) NSString *promotionalPaywallTitle;
@property (readonly, nonatomic) NSString *channelID;

- (id)initWithChannelID:(id)a0 configDictionary:(id)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)initWithChannelID:(id)a0 channelPaywallTitle:(id)a1 hardPaywallTitle:(id)a2 leakyPaywallTitle:(id)a3 promotionalPaywallTitle:(id)a4;

@end
