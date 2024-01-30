@class NSString, NSData;

@interface _ACCBluetoothStatusComponent : NSObject

@property (readonly, nonatomic) NSString *accessoryUID;
@property (readonly, nonatomic) NSString *componentUID;
@property (readonly, nonatomic) NSData *macAddr;
@property (readonly, nonatomic) NSString *name;
@property (nonatomic) struct BTAccessoryManagerImpl { } *btAccessoryManager;
@property (nonatomic) struct BTDeviceImpl { } *btDevice;
@property (nonatomic) BOOL needToUnplugBTDevice;

+ (id)createComponentFromDict:(id)a0;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUID:(id)a0 macAddr:(id)a1 name:(id)a2 forAccessoryUID:(id)a3;

@end
