@class NSString, NSMutableDictionary;

@interface ACCPlatformBluetoothStatusAccessory : NSObject

@property (readonly, nonatomic) NSString *accessoryUID;
@property (readonly, nonatomic) NSMutableDictionary *componentList;

- (void).cxx_destruct;
- (id)initWithUID:(id)a0;
- (id)description;

@end
