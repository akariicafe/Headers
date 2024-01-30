@class NSString, NSObject;
@protocol OS_os_log;

@interface _CNDonationAgentLogger : NSObject <CNDonationAgentLogger>

@property (readonly, nonatomic) NSObject<OS_os_log> *log_t;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)maintenanceServiceDidStart;
- (void)willDiscoverExtensions;
- (void)didRejectDonationIdentifier:(id)a0;
- (void)beginRestorePersistedState;
- (void)agentDidStart;
- (void)denyingRequestFromProcess:(int)a0;
- (void)willRejectClusterIdentifier:(id)a0;
- (void)agentWillHandleRequest:(SEL)a0;
- (void)featureDidDisable;
- (void)agentWillStart;
- (void)couldNotRenewBecauseNotADonorExtension:(id)a0;
- (void)donationServiceDidStart;
- (void)willRejectDonationIdentifier:(id)a0;
- (void)didRejectClusterIdentifier:(id)a0;
- (void)endRestorePersistedState;
- (void)featureNotEnabled:(SEL)a0;
- (void)agentWillStop;
- (void)acceptingConnectionFromProcess:(int)a0;
- (void)foundUnhashableValue:(id)a0;
- (void)couldNotRejectDonationIdentifier:(id)a0 error:(id)a1;
- (void)couldNotRejectUnknownDonationIdentifier:(id)a0;
- (void)didDiscoverExtension:(id)a0;
- (void)didDiscoverExtensions;
- (void)didRenewValue:(id)a0 untilDate:(id)a1;
- (void)willSaveExtensionVersions;
- (void)maintenanceServiceWillStart;
- (void)willListRejections;
- (void)didFailToDiscoverExtensions:(id)a0;
- (void)didDiscoverUnexpectedExtensionType:(id)a0;
- (void)contactsChangedNotificationEmailAddressesChanged:(BOOL)a0;
- (void)donationServiceWillStop;
- (void)willLoadExtensionVersions;
- (void)featureWillEnable;
- (void)didListRejections;
- (void)couldNotRejectUnknownClusterIdentifier:(id)a0;
- (void)didRemoveAllRejections;
- (void)featureWillDisable;
- (void)willRemoveAllRejections;
- (void)maintenanceServiceWillStop;
- (void)couldNotRenewBecauseLoadingError:(id)a0;
- (void)donationServiceWillStart;
- (id)init;
- (void)featureDidEnable;
- (void)willRenewValues:(id)a0 withDonor:(id)a1;
- (void)couldNotRejectClusterIdentifier:(id)a0 error:(id)a1;
- (void)agentDidHandleRequest:(SEL)a0;
- (void)acceptingDonations:(id)a0;
- (void).cxx_destruct;
- (void)couldNotRenewBecauseDonorError:(id)a0;
- (void)preExpiredDonations:(id)a0;
- (void)contactsChangedNotificationFoundName:(BOOL)a0 nameChanged:(BOOL)a1;

@end
