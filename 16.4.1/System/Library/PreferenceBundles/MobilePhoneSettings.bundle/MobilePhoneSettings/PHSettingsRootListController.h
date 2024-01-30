@class VMVoicemailManager, NSOrderedSet, NSString, TPSTelephonyController, NSObject;
@protocol OS_dispatch_queue;

@interface PHSettingsRootListController : PSListController <TPSTelephonyControllerDelegate>

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (copy, nonatomic) NSOrderedSet *subscriptions;
@property (readonly, nonatomic) TPSTelephonyController *telephonyController;
@property (readonly, nonatomic) VMVoicemailManager *voicemailManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleURL:(id)a0 withCompletion:(id /* block */)a1;
- (id)specifiers;
- (id)init;
- (void).cxx_destruct;
- (void)telephonyController:(id)a0 didChangeSubscriptions:(id)a1;
- (void)changeVoicemailPassword:(id)a0;
- (BOOL)shouldShowSpecifier:(id)a0;
- (BOOL)showVoicemailPassword;

@end
