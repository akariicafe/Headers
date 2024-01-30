@interface DRSCloudChannelConfigMO : NSManagedObject

@property (nonatomic) short channelType;
@property (nonatomic) short environment;
@property (nonatomic) BOOL overridesDeviceDefault;
@property (nonatomic) short platform;

+ (id)fetchRequest;

@end
