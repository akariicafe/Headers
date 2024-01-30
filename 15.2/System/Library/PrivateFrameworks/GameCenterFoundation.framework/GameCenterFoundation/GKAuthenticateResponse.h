@class NSString, NSURL;

@interface GKAuthenticateResponse : GKInternalRepresentation

@property (retain, nonatomic) NSString *playerID;
@property (nonatomic) BOOL loginDisabled;
@property (nonatomic) BOOL passwordChangeRequired;
@property (retain, nonatomic) NSURL *passwordChangeURL;
@property (nonatomic) BOOL shouldShowLinkAccountsUI;
@property (retain, nonatomic) NSString *alertTitle;
@property (retain, nonatomic) NSString *alertMessage;
@property (retain, nonatomic) NSString *lastPersonalizationVersionDisplayed;
@property (nonatomic) unsigned long long lastPrivacyNoticeVersionDisplayed;
@property (retain, nonatomic) NSString *lastProfilePrivacyVersionDisplayed;
@property (nonatomic) BOOL useNewDashboardUI;
@property (nonatomic) BOOL accessPointIsOnAutomatically;
@property (nonatomic) BOOL accessPointShowHighlights;
@property (nonatomic) long long accessPointLocation;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)init;

@end
