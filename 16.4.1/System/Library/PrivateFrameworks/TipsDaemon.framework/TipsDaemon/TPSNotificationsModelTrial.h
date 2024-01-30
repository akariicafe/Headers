@class NSString, TRILevel;

@interface TPSNotificationsModelTrial : TPSTrial <TPSTrialUpdateHandler>

@property (retain, nonatomic) TRILevel *modelBasedNotifications;
@property (retain, nonatomic) TRILevel *notificationsModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)namespaceName;
- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldNotify;
- (id)_shouldNotifyWithModelInputs:(id)a0;
- (void)handleUpdate;
- (id)notificationsClassifier;
- (int)projectID;
- (BOOL)shouldUseModelBasedNotifications;

@end
