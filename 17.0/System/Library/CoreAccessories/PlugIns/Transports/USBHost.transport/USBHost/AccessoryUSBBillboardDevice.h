@class NSDictionary, NSString;

@interface AccessoryUSBBillboardDevice : NSObject

@property (readonly, nonatomic) unsigned long long registryEntryID;
@property (readonly, nonatomic) unsigned short vid;
@property (readonly, nonatomic) unsigned short pid;
@property (readonly, nonatomic) NSDictionary *ioregProperties;
@property (readonly, nonatomic) NSString *identifier;

+ (unsigned long long)getRegistryEntryIDFromService:(unsigned int)a0;
+ (unsigned int)parentServiceVidPid:(unsigned int)a0;

- (id)initWithService:(unsigned int)a0;
- (void).cxx_destruct;
- (void)dismissNotSupportNotification;
- (void)presentNotSupportNotification;

@end
