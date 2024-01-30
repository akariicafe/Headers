@class ACHTemplateStore, NSDictionary, HDProfile, NSString;

@interface ACHBackCompatMonthlyChallengeListener : NSObject <HDHealthDaemonReadyObserver, HDDatabaseProtectedDataObserver>

@property (weak, nonatomic) HDProfile *profile;
@property (weak, nonatomic) ACHTemplateStore *templateStore;
@property (copy, nonatomic) id /* block */ readTemplatesBlock;
@property (retain, nonatomic) NSDictionary *injectedKeyValuePairs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)daemonReady:(id)a0;
- (void).cxx_destruct;
- (void)database:(id)a0 protectedDataDidBecomeAvailable:(BOOL)a1;
- (void)_protectedNanoUserDefaultsDidSyncWithNotification:(id)a0;
- (BOOL)_readAndSaveBackCompatDefinitions;
- (id)_definitionsFromKeyValuePairs:(id)a0;
- (id)initWithProfile:(id)a0 templateStore:(id)a1;

@end
