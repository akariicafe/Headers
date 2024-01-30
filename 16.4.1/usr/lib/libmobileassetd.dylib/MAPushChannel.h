@class NSString;

@interface MAPushChannel : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) long long populationType;
@property (readonly, nonatomic) NSString *base64ChannelId;

- (id)channelIDForPopulationType;
- (id)initWithIdentifier:(id)a0;
- (id)initWithPopulationType:(long long)a0;
- (BOOL)isEqualToPushChannelId:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)humanReadableChannelName;
- (id)description;
- (void).cxx_destruct;

@end
