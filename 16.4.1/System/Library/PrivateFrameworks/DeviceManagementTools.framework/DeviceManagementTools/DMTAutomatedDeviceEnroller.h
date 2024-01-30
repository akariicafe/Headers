@class CATOperationQueue, NSString, NSData, NSError, DMTNetworkCredential;
@protocol DMTProfileInstallationPrimitives, DMTEnrollmentInformationPrimitives, DMTPowerOffPrimitives, DMTErasePrimitives, DMTInternetReachabilityPrimitives, DMTWiFiPrimitives, DMTAutomatedDeviceEnrollmentPrimitives, DMTActivationPrimitives;

@interface DMTAutomatedDeviceEnroller : NSObject <DMTEnrollmentPrerequisiteReceiving, DMTEnrollmentInitiating, DMTEnrollmentStateProviding, DMTEnrollmentOrganizationProviding, DMTEnrollmentNetworkNameProviding>

@property (readonly, nonatomic) id<DMTAutomatedDeviceEnrollmentPrimitives> enrollmentPrimitives;
@property (readonly, nonatomic) id<DMTEnrollmentInformationPrimitives> enrollmentInformationPrimitives;
@property (readonly, nonatomic) id<DMTInternetReachabilityPrimitives> reachabilityPrimitives;
@property (readonly, nonatomic) id<DMTActivationPrimitives> activationPrimitives;
@property (readonly, nonatomic) id<DMTWiFiPrimitives> wifiPrimitives;
@property (readonly, nonatomic) id<DMTProfileInstallationPrimitives> profileInstallationPrimitives;
@property (readonly, nonatomic) id<DMTErasePrimitives> destructiveErasePrimitives;
@property (readonly, nonatomic) id<DMTErasePrimitives> nonDestructiveErasePrimitives;
@property (readonly, nonatomic) id<DMTPowerOffPrimitives> powerOffPrimitives;
@property (copy) NSString *organizationName;
@property long long organizationType;
@property (copy) NSString *networkName;
@property long long enrollmentState;
@property (retain) NSError *enrollmentError;
@property (readonly, nonatomic) CATOperationQueue *operationQueue;
@property (copy, nonatomic) NSString *installedNetworkPayloadIdentifier;
@property (nonatomic, getter=isFinalized) BOOL finalized;
@property (copy, nonatomic) DMTNetworkCredential *networkCredential;
@property (copy, nonatomic) NSData *networkPayload;
@property (copy, nonatomic) NSString *enrollmentNonce;
@property (nonatomic) long long postEnrollmentBehavior;
@property (nonatomic) long long networkConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)waitForReachabilityWithTimeout:(double)a0;
- (void)activateDevice;
- (void)activationCompleteWithSuccess:(BOOL)a0 error:(id)a1;
- (void)activationStatusFetchComplete:(BOOL)a0 error:(id)a1;
- (void)beginAutomatedDeviceEnrollment;
- (void)checkActivationStatus;
- (void)checkIfAlreadyEnrolled;
- (void)didDisassociateFromNetworkWithSuccess:(BOOL)a0 error:(id)a1;
- (void)didJoinNetworkWithSuccess:(BOOL)a0 error:(id)a1;
- (void)disassociateWiFi;
- (void)enrollDevice;
- (void)enrollmentCompleteWithResponse:(id)a0 error:(id)a1;
- (void)eraseAllContentAndSettingsDidFinishWithError:(id)a0;
- (void)eraseAllContentAndSettingsWithExternalError:(id)a0;
- (void)eraseAndRestartWithExternalError:(id)a0;
- (void)eraseAndShutDownWithExternalError:(id)a0;
- (void)eraseCurrentNetworkIfNeeded;
- (id)initWithEnrollmentPrimitives:(id)a0 enrollmentInformationPrimitives:(id)a1 reachabilityPrimitives:(id)a2 activationPrimitives:(id)a3 wifiPrimitives:(id)a4 profileInstallationPrimitives:(id)a5 destructiveErasePrimitives:(id)a6 nonDestructiveErasePrimitives:(id)a7 powerOffPrimitives:(id)a8;
- (void)installProfile;
- (void)joinNetwork;
- (void)joinNetworkUsingCredentials;
- (void)profileInstallationDidFinish:(id)a0;
- (void)profileUninstallDidFinish:(id)a0;
- (void)setNetworkCredential:(id)a0 networkPayload:(id)a1 enrollmentNonce:(id)a2 postEnrollmentBehavior:(long long)a3 organizationName:(id)a4 organizationType:(long long)a5 networkConfiguration:(long long)a6;
- (void)tearDownWithFatalError:(id)a0;
- (void)timeoutOperationDidFinish:(id)a0;
- (void)uninstallProfile;
- (void)verifyProfile;

@end
