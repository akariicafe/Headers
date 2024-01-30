@interface EKConferenceURLDetector : NSObject

+ (id)_preferredHostSuffixes;
+ (BOOL)_isValidTelURL:(id)a0;
+ (BOOL)_isPreferredURL:(id)a0;
+ (id)logHandle;
+ (id)conferenceURLFromSources:(id)a0;
+ (id)_linksInSource:(id)a0;
+ (id)_dataDetector;

@end
