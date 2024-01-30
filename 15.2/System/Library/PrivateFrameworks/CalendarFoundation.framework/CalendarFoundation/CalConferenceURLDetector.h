@interface CalConferenceURLDetector : NSObject

+ (BOOL)_hasDisallowedPathExtension:(id)a0;
+ (id)logHandle;
+ (id)_phoneNumberDataDetector;
+ (id)_firstPhoneNumberInSource:(id)a0;
+ (id)_linksInSource:(id)a0;
+ (BOOL)_isGoogleMeetURL:(id)a0;
+ (BOOL)isTUConversationLink:(id)a0;
+ (id)_URLsInSource:(id)a0;
+ (BOOL)isPreferredURL:(id)a0;
+ (id)_googleMeetSuffix;
+ (BOOL)_hasValidPath:(id)a0;
+ (BOOL)_isValidTelURL:(id)a0;
+ (id)conferenceURLFromSources:(id)a0;
+ (id)_dataDetector;
+ (id)_preferredHostSuffixes;
+ (id)_URLDataDetector;
+ (id)googleMeetURLsAndPhoneNumbersFromSource:(id)a0;

@end
