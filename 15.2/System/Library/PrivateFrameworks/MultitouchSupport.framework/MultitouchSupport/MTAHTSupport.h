@class NSBundle;

@interface MTAHTSupport : NSObject

@property (retain) NSBundle *bundle;
@property (retain, nonatomic) Class AHTDevice;

+ (id)sharedInstance;
+ (id)allDevices;

- (void).cxx_destruct;
- (id)init;

@end
