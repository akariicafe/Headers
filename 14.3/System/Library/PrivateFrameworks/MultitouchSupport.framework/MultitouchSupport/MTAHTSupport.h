@class NSBundle;

@interface MTAHTSupport : NSObject

@property (retain) NSBundle *bundle;
@property (retain, nonatomic) Class AHTDevice;

+ (id)sharedInstance;
+ (id)allDevices;

- (id)init;
- (void).cxx_destruct;

@end
