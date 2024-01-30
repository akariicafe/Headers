@class NSString, NSURL;

@interface GKAuthenticateResponse : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (nonatomic) BOOL loginDisabled;
@property (nonatomic) BOOL passwordChangeRequired;
@property (retain, nonatomic) NSURL *passwordChangeURL;
@property (nonatomic) BOOL shouldShowLinkAccountsUI;
@property (retain, nonatomic) NSString *alertTitle;
@property (retain, nonatomic) NSString *alertMessage;
@property (nonatomic) unsigned long long lastWelcomeWhatsNewCopyVersionDisplayed;
@property (nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;
@property (retain, nonatomic) NSString *lastPersonalizationVersionDisplayed;
@property (retain, nonatomic) NSString *lastProfilePrivacyVersionDisplayed;
@property (retain, nonatomic) NSString *lastContactsIntegrationConsentVersionDisplayed;
@property (retain, nonatomic) NSString *lastFriendSuggestionsVersionDisplayed;
@property (nonatomic) BOOL accessPointIsOnAutomatically;
@property (nonatomic) BOOL accessPointShowHighlights;
@property (nonatomic) long long accessPointLocation;

+ (id)secureCodedPropertyKeys;

- (id)init;
- (void).cxx_destruct;

@end
