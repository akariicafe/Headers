@interface MFAttachmentCapabilities : NSObject

+ (BOOL)placeholdersAvailable;
+ (unsigned long long)currentDownloadLimit;
+ (id)capabilitiesDictionary;
+ (BOOL)mailDropAvailableForAccount:(id)a0;
+ (unsigned long long)_mailDropLimit;
+ (BOOL)mailDropAvailable;
+ (BOOL)_isMailDropDevice;
+ (BOOL)mailDropConfigured;
+ (id)mailDropPreferences;
+ (unsigned long long)currentUploadLimit;
+ (unsigned long long)currentMessageLimit;
+ (unsigned long long)mailDropThreshold;
+ (unsigned long long)currentPlaceholderThreshold;
+ (unsigned long long)currentUploadLimitForAccount:(id)a0;
+ (double)mailDropExpiration;
+ (id)allowedMailDropDownloadDomains;

@end
