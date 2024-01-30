@class NSString;

@interface TRIPushChannelId : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int populationType;
@property (readonly, nonatomic) NSString *base64ChannelId;

+ (BOOL)_writeToByte:(char *)a0 fromHexByteString:(id)a1;
+ (id)_base64ChannelIdForIdentifier:(id)a0 populationType:(int)a1;

- (id)initWithIdentifier:(id)a0;
- (id)initWithRolloutDeployment:(id)a0;
- (BOOL)isEqualToPushChannelId:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithBase64EncodedString:(id)a0;
- (id)initWithExperimentId:(id)a0;

@end
