@class NSString;

@interface DRSCloudChannelConfig : NSObject

@property (readonly, nonatomic) unsigned char platform;
@property (readonly, nonatomic) unsigned char type;
@property (readonly, nonatomic) unsigned char environment;
@property (readonly, nonatomic) BOOL overridesDeviceDefault;
@property (readonly, nonatomic) BOOL isNoSubscriptionConfig;
@property (readonly, nonatomic) BOOL allowsWildcardBuild;
@property (readonly, nonatomic) NSString *channelName;
@property (readonly, nonatomic) NSString *channelID;

+ (id)stringForChannelType:(unsigned char)a0;
+ (unsigned char)channelTypeForIsInternal:(BOOL)a0 isSeed:(BOOL)a1 isQA:(BOOL)a2 isCarrier:(BOOL)a3;
+ (id)stringForEnvironment:(unsigned char)a0;
+ (id)deviceDefaultCloudChannelConfig;

- (id)initWithValidPlatform:(unsigned char)a0 channelType:(unsigned char)a1 environment:(unsigned char)a2 overridesDeviceDefault:(BOOL)a3;
- (id)initWithMO:(id)a0;
- (id)initNoSubscriptionConfig:(BOOL)a0;
- (id)initNoChecksWithPlatform:(unsigned char)a0 channelType:(unsigned char)a1 environment:(unsigned char)a2 overridesDeviceDefault:(BOOL)a3;
- (BOOL)isEqual:(id)a0;
- (id)jsonDictionaryRepresentation;
- (id)debugDescription;

@end
