@class NSURL, GKPlayerCredential, NSString;

@interface GKAuthenticateResponse : GKInternalRepresentation

@property (retain, nonatomic) GKPlayerCredential *credential;
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

- (id)init;
- (void).cxx_destruct;

@end
