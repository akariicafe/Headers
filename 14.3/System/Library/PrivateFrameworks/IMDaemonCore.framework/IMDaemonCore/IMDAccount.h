@class NSMutableDictionary, NSDictionary, NSString, IMDService, IMDServiceSession;

@interface IMDAccount : NSObject <IMSystemMonitorListener> {
    long long _accountType;
    NSMutableDictionary *_myStatus;
    NSDictionary *_lastPostedStatus;
}

@property (nonatomic) BOOL isLoading;
@property (nonatomic) BOOL wasDisabledAutomatically;
@property (readonly, nonatomic) BOOL shouldPublishNowPlaying;
@property (readonly, nonatomic) int registrationStatus;
@property (readonly, nonatomic) int registrationError;
@property (readonly, retain, nonatomic) NSDictionary *registrationAlertInfo;
@property (readonly, retain, nonatomic) NSDictionary *statusToSave;
@property (readonly, retain, nonatomic) NSDictionary *statusToPost;
@property (readonly, retain, nonatomic) NSDictionary *accountInfoToPost;
@property (readonly, retain, nonatomic) NSMutableDictionary *accountDefaults;
@property (readonly, retain, nonatomic) NSString *accountID;
@property (readonly, retain, nonatomic) NSString *loginID;
@property (readonly, retain, nonatomic) IMDService *service;
@property (retain, nonatomic) IMDServiceSession *session;
@property (readonly, nonatomic) BOOL isActive;
@property (readonly, nonatomic) BOOL isDisabled;
@property (nonatomic) BOOL isManaged;
@property (readonly, nonatomic) BOOL canMakeDowngradeRoutingChecks;
@property (readonly, retain, nonatomic) NSDictionary *status;
@property (readonly, nonatomic) unsigned int serviceLoginStatus;
@property (readonly, nonatomic) int serviceDisconnectReason;
@property (readonly, retain, nonatomic) NSString *serviceLoginStatusMessage;
@property (readonly, nonatomic) long long accountType;

- (void)changeStatus:(id)a0;
- (void)postAccountCapabilitiesToListener:(id)a0;
- (void)_updateIdle;
- (void)writeAccountDefaults:(id)a0;
- (void)postAccountCapabilities;
- (void)setRegistrationStatus:(int)a0 error:(int)a1 alertInfo:(id)a2;
- (void)createSessionIfNecessary;
- (void)_forceSetLoginStatus:(unsigned int)a0 message:(id)a1 reason:(int)a2 properties:(id)a3;
- (void)tunesController:(id)a0 playerInfoChanged:(id)a1;
- (void)systemDidBecomeIdle;
- (id)initWithAccountID:(id)a0 defaults:(id)a1 service:(id)a2;
- (void)setLoginStatus:(unsigned int)a0 message:(id)a1;
- (void)dealloc;
- (void)releaseSession;
- (void)systemDidBecomeUnidle;
- (void)setLoginStatus:(unsigned int)a0 message:(id)a1 reason:(int)a2 properties:(id)a3;
- (id)_registrationInfo;

@end
