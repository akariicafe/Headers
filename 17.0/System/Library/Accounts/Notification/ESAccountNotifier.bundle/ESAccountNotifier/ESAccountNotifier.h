@class NSString, NSMutableDictionary;

@interface ESAccountNotifier : NSObject <ACDAccountNotificationPlugin>

@property (readonly, nonatomic) NSMutableDictionary *stopMonitoringAgentsTokens;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_dataclassesWeCareAbout;

- (BOOL)account:(id)a0 willChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (void)_stopMonitoringAgentsForAccountWithIdentifier:(id)a0;
- (id)init;
- (void)account:(id)a0 didChangeWithType:(int)a1 inStore:(id)a2 oldAccount:(id)a3;
- (BOOL)canSaveAccount:(id)a0 inStore:(id)a1;
- (void).cxx_destruct;
- (id)_accountTypeWithIdentifier:(id)a0 inStore:(id)a1;
- (BOOL)_sanityCheckEnabledDataclassesOnExchangeAccountInfo:(id)a0;
- (id)_modifiedDataclassesForAccount:(id)a0 oldAccount:(id)a1;
- (BOOL)_hasEasAccountInStore:(id)a0;
- (id)_leafAccountTypesToCheckForEquality;
- (id)_parentAccountTypes;
- (void)_startMonitoringAgentsIfNeededForAccountWithIdentifier:(id)a0;

@end
