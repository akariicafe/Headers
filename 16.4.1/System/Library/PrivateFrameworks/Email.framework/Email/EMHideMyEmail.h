@class NSNumber, NSString, AKPrivateEmailController, ACAccount, NSObject, EFLocked;
@protocol OS_os_log, EFAssertableScheduler;

@interface EMHideMyEmail : NSObject <EFLoggable>

@property (class, readonly) EMHideMyEmail *sharedInstance;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) AKPrivateEmailController *controller;
@property (retain) id<EFAssertableScheduler> scheduler;
@property (retain, nonatomic) EFLocked *isAvailableLocked;
@property (readonly, nonatomic) ACAccount *primaryAccount;
@property (readonly, nonatomic) NSString *primaryAccountAltDSID;
@property (readonly, nonatomic) BOOL hasCheckedIfFeatureIsAvailable;
@property (readonly, nonatomic) NSString *forwardingEmailForPrimaryAccount;
@property (readonly, nonatomic) NSNumber *isAvailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)forwardingEmailForAccount:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)generateReplyToEmailForRecipient:(id)a0 hmeAddress:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (void)generateHideMyEmailAddressForEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)isAvailable:(id /* block */)a0;
- (BOOL)isConfigured:(id *)a0;
- (void)isHideMyEmailAddressValid:(id)a0 senderAddress:(id)a1 completion:(id /* block */)a2;
- (id)addLocalizedDisplayNameForAddress:(id)a0;
- (void)generateHideMyEmailAddressForEmailAddress:(id)a0 altDSID:(id)a1 completion:(id /* block */)a2;
- (void)hideMyEmailAddressForRecipientAddress:(id)a0 altDSID:(id)a1 completion:(id /* block */)a2;
- (void)hideMyEmailAddressForRecipientAddress:(id)a0 completion:(id /* block */)a1;
- (void)hideMyEmailAddresses:(id /* block */)a0;
- (void)hideMyEmailAddressesInAccountWithAltDSID:(id)a0 completion:(id /* block */)a1;
- (BOOL)isConfiguredForAccountWithAltDSID:(id)a0 error:(id *)a1;
- (void)resetIsAvailable;

@end
