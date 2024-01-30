@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)agentWillStart;
- (void)agentDidStart;
- (void)agentWillStop;
- (void)donationServiceWillStart;
- (void)donationServiceDidStart;
- (void)donationServiceWillStop;
- (void)maintenanceServiceWillStart;
- (void)maintenanceServiceDidStart;
- (void)maintenanceServiceWillStop;
- (void)beginRestorePersistedState;
- (void)endRestorePersistedState;
- (void)acceptingConnectionFromProcess:(int)a0;
- (void)denyingRequestFromProcess:(int)a0;
- (void)acceptingDonations:(id)a0;
- (void)preExpiredDonations:(id)a0;
- (void)agentWillHandleRequest:(SEL)a0;
- (void)agentDidHandleRequest:(SEL)a0;
- (void)featureNotEnabled:(SEL)a0;
- (void)featureWillDisable;
- (void)featureDidDisable;
- (void)featureWillEnable;
- (void)featureDidEnable;
- (void)contactsChangedNotificationFoundName:(BOOL)a0 nameChanged:(BOOL)a1;
- (void)contactsChangedNotificationEmailAddressesChanged:(BOOL)a0;
- (void)willDiscoverExtensions;
- (void)didDiscoverExtension:(id)a0;
- (void)didDiscoverUnexpectedExtensionType:(id)a0;
- (void)didDiscoverExtensions;
- (void)didFailToDiscoverExtensions:(id)a0;
- (void)willLoadExtensionVersions;
- (void)willSaveExtensionVersions;
- (void)willRejectDonationIdentifier:(id)a0;
- (void)didRejectDonationIdentifier:(id)a0;
- (void)couldNotRejectUnknownDonationIdentifier:(id)a0;
- (void)couldNotRejectDonationIdentifier:(id)a0 error:(id)a1;
- (void)willRejectClusterIdentifier:(id)a0;
- (void)didRejectClusterIdentifier:(id)a0;
- (void)couldNotRejectUnknownClusterIdentifier:(id)a0;
- (void)couldNotRejectClusterIdentifier:(id)a0 error:(id)a1;
- (void)willListRejections;
- (void)didListRejections;
- (void)willRemoveAllRejections;
- (void)didRemoveAllRejections;
- (void)foundUnhashableValue:(id)a0;
- (void)willRenewValues:(id)a0 withDonor:(id)a1;
- (void)didRenewValue:(id)a0 untilDate:(id)a1;
- (void)couldNotRenewBecauseNotADonorExtension:(id)a0;
- (void)couldNotRenewBecauseDonorError:(id)a0;
- (void)couldNotRenewBecauseLoadingError:(id)a0;

@end
