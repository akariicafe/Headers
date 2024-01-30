@class NSString;

@interface TCSBehavior : NSObject {
    int _firstUnlockToken;
}

@property (readonly, nonatomic) BOOL isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
@property (readonly, nonatomic) BOOL isAppleInternalInstall;
@property (readonly, nonatomic) BOOL isM8Device;
@property (readonly, nonatomic) NSString *regionCode;

+ (id)sharedBehavior;
+ (id)regionCode;
+ (BOOL)isAppleInternalInstall;
+ (id)_regionCode;
+ (BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (BOOL)_isAppleInternalInstall;
+ (BOOL)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (BOOL)_isM8Device;
+ (BOOL)isM8Device;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_handleDeviceFirstUnlock;

@end
