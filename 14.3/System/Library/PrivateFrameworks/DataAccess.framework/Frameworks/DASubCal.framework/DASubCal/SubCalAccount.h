@class NSString, NSDictionary, NSData, NSURL, DACoreDAVTaskManager;

@interface SubCalAccount : DAAccount <SubCalValidationTaskDelegate>

@property (retain, nonatomic) NSData *tmpICSData;
@property (nonatomic) BOOL shouldRemoveAlarms;
@property (nonatomic) BOOL shouldRemoveAttachments;
@property (retain, nonatomic) NSString *syncId;
@property (retain, nonatomic) NSDictionary *externalRepresentation;
@property (readonly, nonatomic) NSURL *subscriptionURL;
@property (retain, nonatomic) NSString *calDAVURLString;
@property (readonly, nonatomic) NSString *calendarExternalId;
@property (nonatomic) double refreshInterval;
@property (nonatomic) BOOL useFTP;
@property (nonatomic) BOOL isManagedCalendar;
@property (nonatomic) BOOL isHolidaySubscribedCalendar;
@property (nonatomic) BOOL subscribedURLSanitized;
@property (nonatomic) BOOL allowInsecureConnection;
@property (readonly, nonatomic) DACoreDAVTaskManager *taskManager;
@property (nonatomic) int subCalAccountVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)accountDescription;
- (void)setAccountDescription:(id)a0;
- (void).cxx_destruct;
- (id)initWithBackingAccountInfo:(id)a0;
- (BOOL)accountHasSignificantPropertyChangesWithChangeInfo:(id)a0;
- (void)removeDBSyncData;
- (id)onBehalfOfBundleIdentifier;
- (BOOL)upgradeAccount;
- (void)discoverInitialPropertiesWithConsumer:(id)a0;
- (BOOL)isSubscribedCalendarAccount;
- (BOOL)isEqualToAccount:(id)a0;
- (void)setHost:(id)a0;
- (id)localizedIdenticalAccountFailureMessage;
- (id)localizedInvalidPasswordMessage;
- (void)_checkValidityWithConsumer:(id)a0 quickValidate:(BOOL)a1;
- (id)_tmpICSCalendarPath;
- (void)handleTrustChallenge:(id)a0 forTask:(id)a1;
- (void)handleTrustChallenge:(id)a0 forTask:(id)a1 completionHandler:(id /* block */)a2;
- (void)subCalValidationTask:(id)a0 finishedWithError:(id)a1 calendarName:(id)a2 document:(id)a3 calendarData:(id)a4;
- (void)subCalValidationTask:(id)a0 downloadProgressedTo:(long long)a1 outOf:(long long)a2;
- (void)quickValidate:(id)a0;
- (void)saveTmpICSData;
- (void)clearTmpICSData;
- (void)upgradeAccountSpecificPropertiesOnAccount:(id)a0 inStore:(id)a1 parentAccount:(id)a2;
- (void)refreshAllCalendars:(BOOL)a0;
- (BOOL)hasSubscribedCalendarAtURL:(id)a0;

@end
