@class NSMutableDictionary;

@interface MSDKDemoState : NSObject

@property (retain) NSMutableDictionary *cache;

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isStoreDemoModeEnabled;
- (int)_activationConfigurationFlags:(id *)a0;
- (BOOL)_isDeviceEnrolledWithDeKOTA:(id *)a0;
- (BOOL)_isStoreDemoModeEnabled:(id *)a0;
- (BOOL)isDeviceEnrolledWithDeKOTA;
- (BOOL)isDeviceEnrolledWithDeKOTA:(id *)a0;
- (BOOL)isStoreDemoModeEnabled:(id *)a0;

@end
