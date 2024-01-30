@class NSString, AKPrivateEmailController, ACAccount, NSObject, NSNumber;
@protocol OS_os_log;

@interface EMHideMyEmail : NSObject <EFLoggable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _isAvailableLock;
}

@property (class, readonly) EMHideMyEmail *sharedInstance;
@property (class, readonly) NSObject<OS_os_log> *log;

@property (retain, nonatomic) AKPrivateEmailController *controller;
@property (retain, nonatomic) NSNumber *isAvailable;
@property (readonly, nonatomic) ACAccount *primaryAccount;
@property (readonly, nonatomic) NSString *primaryAccountAltDSID;
@property (readonly, nonatomic) BOOL hasCheckedIfFeatureIsAvailable;
@property (readonly, nonatomic) NSString *forwardingAddress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (void)isAvailable:(id /* block */)a0;
- (BOOL)isConfigured:(id *)a0;
- (void)generateHideMyEmailAddressForEmailAddress:(id)a0 completion:(id /* block */)a1;
- (void)generateReplyToEmailForRecipient:(id)a0 hmeAddress:(id)a1 account:(id)a2 completion:(id /* block */)a3;
- (void)isHideMyEmailAddressValid:(id)a0 completion:(id /* block */)a1;
- (void)hideMyEmailAddressForRecipientAddress:(id)a0 altDSID:(id)a1 completion:(id /* block */)a2;
- (void)hideMyEmailAddressesInAccountWithAltDSID:(id)a0 completion:(id /* block */)a1;
- (void)hideMyEmailAddresses:(id /* block */)a0;
- (void)generateHideMyEmailAddressForEmailAddress:(id)a0 altDSID:(id)a1 completion:(id /* block */)a2;
- (void)resetIsAvailable;
- (BOOL)isConfiguredForAccountWithAltDSID:(id)a0 error:(id *)a1;
- (void)hideMyEmailAddressForRecipientAddress:(id)a0 completion:(id /* block */)a1;

@end
