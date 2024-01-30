@interface CLSUtil : NSObject

@property (class, readonly, nonatomic) BOOL isAppleInternalInstall;
@property (class, readonly, nonatomic) BOOL isSystemIntegrityEnabled;

+ (void)postNotification:(char *)a0;
+ (id)stringFromTimeInterval:(double)a0;
+ (id)hashData:(id)a0 lastHash:(id)a1;
+ (id)mediumStringFromDate:(id)a0;
+ (id)percentNumberFormatter;
+ (id)mediumDateFormatter;
+ (id)hashData:(id)a0 lastHashData:(id)a1;
+ (id)percentageStringFromNumber:(id)a0;
+ (id)dataFromPath:(id)a0 makeBackwardCompatible:(BOOL)a1 error:(id *)a2;
+ (id)pathFromData:(id)a0;
+ (id)dataFromError:(id)a0;
+ (id)errorFromData:(id)a0;
+ (id)hashArrayOfStrings:(id)a0 lastHash:(id)a1;
+ (void)postNotificationAsync:(char *)a0;
+ (id)userDefaultsConfigurationDictionaryAndReturnError:(id *)a0;
+ (void)fetchInfoForAppWithBundleIdentifier:(id)a0 completion:(id /* block */)a1;

@end
