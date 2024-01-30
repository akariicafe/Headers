@interface MFAttachmentCapabilities : NSObject

+ (BOOL)_isMailDropDevice;
+ (unsigned long long)_mailDropLimit;
+ (id)capabilitiesDictionary;
+ (unsigned long long)currentDownloadLimit;
+ (unsigned long long)currentMessageLimit;
+ (unsigned long long)currentPlaceholderThreshold;
+ (unsigned long long)currentUploadLimit;
+ (unsigned long long)currentUploadLimitForAccount:(id)a0;
+ (BOOL)mailDropAvailable;
+ (BOOL)mailDropAvailableForAccount:(id)a0;
+ (BOOL)mailDropConfigured;
+ (double)mailDropExpiration;
+ (id)mailDropPreferences;
+ (unsigned long long)mailDropThreshold;
+ (BOOL)placeholdersAvailable;

@end
