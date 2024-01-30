@class NSBundle;

@interface MTAHTSupport : NSObject

@property (retain) NSBundle *bundle;
@property (retain, nonatomic) Class AHTDevice;
@property (retain, nonatomic) Class AHTInterface;

+ (id)sharedInstance;
+ (id)allDevices;
+ (id)allInterfaces;
+ (id)getDeviceInServiceTree:(unsigned int)a0;
+ (id)getInterfaceInServiceTree:(unsigned int)a0;

- (id)init;
- (void).cxx_destruct;

@end
