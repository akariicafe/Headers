@interface HUMediaAccountUtilities : NSObject

+ (id)defaultCurrentVolumeForMediaProfiles:(id)a0;
+ (id)determineMediaPickerAvailabilityForHomePodProfiles:(id)a0 inHome:(id)a1;
+ (id)isAppleMusicSubscriptionAvailable;
+ (BOOL)isMusicAppInstalled;
+ (id)musicAppURL;
+ (id)reasonForMediaPickerNotAvailable:(long long)a0;

@end
