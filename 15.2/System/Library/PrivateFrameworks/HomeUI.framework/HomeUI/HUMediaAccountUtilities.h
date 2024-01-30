@interface HUMediaAccountUtilities : NSObject

+ (id)musicAppURL;
+ (BOOL)isMusicAppInstalled;
+ (id)isAppleMusicSubscriptionAvailable;
+ (id)reasonForMediaPickerNotAvailable:(long long)a0;
+ (id)defaultCurrentVolumeForMediaProfiles:(id)a0;
+ (id)determineMediaPickerAvailabilityForHomePodProfiles:(id)a0 inHome:(id)a1;

@end
