@class NSString;

@interface TCSBehavior : NSObject {
    int _firstUnlockToken;
}

@property (readonly, nonatomic) BOOL isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
@property (readonly, nonatomic) BOOL isAppleInternalInstall;
@property (readonly, nonatomic) BOOL isM8Device;
@property (readonly, nonatomic) BOOL isRunningInStoreDemoModeOrSimulator;
@property (readonly, nonatomic) NSString *regionCode;

+ (id)regionCode;
+ (BOOL)isAppleInternalInstall;
+ (BOOL)_isAppleInternalInstall;
+ (id)sharedBehavior;
+ (id)_regionCode;
+ (BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (BOOL)_isM8Device;
+ (BOOL)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (BOOL)_isRunningInStoreDemoModeOrSimulator;
+ (BOOL)isM8Device;
+ (BOOL)isRunningInStoreDemoModeOrSimulator;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)_handleDeviceFirstUnlock;

@end
