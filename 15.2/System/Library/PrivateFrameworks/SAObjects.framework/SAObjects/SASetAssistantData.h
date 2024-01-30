@class SAVoice, NSArray, NSString, SAWatchData, NSNumber, SAMediaContentRatingRestrictions;

@interface SASetAssistantData : SABaseCommand <SAServerBoundCommand>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSArray *abSources;
@property (copy, nonatomic) NSNumber *allowUserGeneratedContent;
@property (copy, nonatomic) NSString *anchor;
@property (nonatomic) BOOL censorSpeech;
@property (copy, nonatomic) NSString *countryCode;
@property (copy, nonatomic) NSNumber *debugFlags;
@property (copy, nonatomic) NSArray *deviceCapabilities;
@property (copy, nonatomic) NSString *deviceColor;
@property (copy, nonatomic) NSString *deviceEnclosure;
@property (copy, nonatomic) NSString *deviceVersion;
@property (copy, nonatomic) NSString *firstName;
@property (copy, nonatomic) NSString *fullStorefrontId;
@property (nonatomic) BOOL handsFree;
@property (copy, nonatomic) NSNumber *holdToTalkThresholdInMilliseconds;
@property (nonatomic) BOOL inRetailStoreDemoMode;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSArray *meCards;
@property (retain, nonatomic) SAMediaContentRatingRestrictions *mediaContentRatingRestrictions;
@property (nonatomic) BOOL mediaPlayerExplicitContentDisallowed;
@property (copy, nonatomic) NSString *osVersion;
@property (copy, nonatomic) NSArray *parentalRestrictions;
@property (copy, nonatomic) NSString *preferredLanguage;
@property (copy, nonatomic) NSString *region;
@property (copy, nonatomic) NSNumber *storefront;
@property (copy, nonatomic) NSString *temperatureUnit;
@property (copy, nonatomic) NSString *timeZoneId;
@property (retain, nonatomic) SAVoice *ttsVoice;
@property (copy, nonatomic) NSNumber *twentyFourHourTimeDisplay;
@property (copy, nonatomic) NSNumber *uiScale;
@property (copy, nonatomic) NSString *userInterfaceIdiom;
@property (nonatomic) BOOL voiceOver;
@property (copy, nonatomic) NSNumber *voiceTriggerEnabled;
@property (retain, nonatomic) SAWatchData *watchData;
@property (copy, nonatomic) NSString *aceId;
@property (copy, nonatomic) NSString *refId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)setAssistantData;
+ (id)setAssistantDataWithDictionary:(id)a0 context:(id)a1;

- (id)encodedClassName;
- (id)groupIdentifier;
- (BOOL)requiresResponse;

@end
