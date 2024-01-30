@class NSString;

@interface TCSBehavior : NSObject {
    int _firstUnlockToken;
}

@property (readonly, nonatomic) BOOL isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
@property (readonly, nonatomic) BOOL isAppleInternalInstall;
@property (readonly, nonatomic) BOOL isM8Device;
@property (readonly, nonatomic) NSString *regionCode;

+ (id)sharedBehavior;
+ (id)_regionCode;
+ (BOOL)isAppleInternalInstall;
+ (id)regionCode;
+ (BOOL)_isAppleInternalInstall;
+ (BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (BOOL)_isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
+ (BOOL)_isM8Device;
+ (BOOL)isM8Device;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_handleDeviceFirstUnlock;

@end
