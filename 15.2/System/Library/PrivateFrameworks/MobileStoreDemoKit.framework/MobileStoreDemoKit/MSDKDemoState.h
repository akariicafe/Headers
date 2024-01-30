@class NSMutableDictionary;

@interface MSDKDemoState : NSObject

@property (retain) NSMutableDictionary *cache;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isStoreDemoModeEnabled;
- (BOOL)isDeviceEnrolledWithDeKOTA;
- (int)activationConfigurationFlags;

@end
