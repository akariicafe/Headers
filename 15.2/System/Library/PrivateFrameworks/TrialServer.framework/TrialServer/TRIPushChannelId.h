@class NSString;

@interface TRIPushChannelId : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) int populationType;
@property (readonly, nonatomic) NSString *base64ChannelId;

+ (id)_base64ChannelIdForIdentifier:(id)a0 populationType:(int)a1;
+ (BOOL)_writeToByte:(char *)a0 fromHexByteString:(id)a1;
+ (id)identifierByRemovingTestPrefixFromIdentifier:(id)a0;

- (id)initWithIdentifier:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithBase64EncodedString:(id)a0;
- (id)initWithExperimentId:(id)a0;
- (BOOL)isEqualToPushChannelId:(id)a0;
- (unsigned long long)hash;
- (id)initWithRolloutDeployment:(id)a0;

@end
