@class NSString, TUCallCapabilitiesXPCClient, NSUUID, NSURL, TUCTCapabilityInfo, TUSenderIdentityCapabilitiesState, NSData;

@interface TUSenderIdentityCapabilities : NSObject

@property (readonly, copy, nonatomic) TUSenderIdentityCapabilitiesState *state;
@property (readonly, nonatomic) TUCallCapabilitiesXPCClient *client;
@property (readonly, nonatomic) TUCTCapabilityInfo *voLTECallingCapabilityInfo;
@property (readonly, nonatomic) TUCTCapabilityInfo *wiFiCallingCapabilityInfo;
@property (readonly, nonatomic) TUCTCapabilityInfo *thumperCallingCapabilityInfo;
@property (readonly, copy, nonatomic) NSUUID *senderIdentityUUID;
@property (readonly, nonatomic) BOOL supportsSimultaneousVoiceAndData;
@property (readonly, nonatomic) BOOL canAttemptTelephonyCallsWithoutCellularConnection;
@property (readonly, nonatomic) BOOL canAttemptEmergencyCallsWithoutCellularConnection;
@property (readonly, nonatomic, getter=isCSCallingCurrentlyAvailable) BOOL csCallingCurrentlyAvailable;
@property (readonly, nonatomic) BOOL supportsVoLTECalling;
@property (readonly, nonatomic, getter=isVoLTECallingEnabled) BOOL voLTECallingEnabled;
@property (readonly, nonatomic, getter=isVoLTECallingCurrentlyAvailable) BOOL voLTECallingCurrentlyAvailable;
@property (readonly, nonatomic) BOOL supportsWiFiCalling;
@property (readonly, nonatomic, getter=isWiFiCallingEnabled) BOOL wiFiCallingEnabled;
@property (readonly, nonatomic) BOOL supportsWiFiCallingRoaming;
@property (readonly, nonatomic, getter=isWiFiCallingRoamingEnabled) BOOL wiFiCallingRoamingEnabled;
@property (readonly, nonatomic, getter=isWiFiCallingCurrentlyAvailable) BOOL wiFiCallingCurrentlyAvailable;
@property (readonly, nonatomic) BOOL supportsEmergencyWiFiCalling;
@property (readonly, nonatomic, getter=isEmergencyWiFiCallingCurrentlyAvailable) BOOL emergencyWiFiCallingCurrentlyAvailable;
@property (readonly, nonatomic) int wiFiCallingProvisioningStatus;
@property (readonly, copy, nonatomic) NSURL *wiFiCallingProvisioningURL;
@property (readonly, nonatomic, getter=isWiFiCallingProvisioningURLInvalid) BOOL wiFiCallingProvisioningURLInvalid;
@property (readonly, copy, nonatomic) NSData *wiFiCallingProvisioningPostData;
@property (readonly, nonatomic) BOOL supportsThumperCalling;
@property (readonly, nonatomic, getter=isThumperCallingAllowedForCurrentDevice) BOOL thumperCallingAllowedForCurrentDevice;
@property (readonly, nonatomic, getter=isThumperCallingEnabled) BOOL thumperCallingEnabled;
@property (readonly, nonatomic, getter=isThumperCallingCurrentlyAvailable) BOOL thumperCallingCurrentlyAvailable;
@property (readonly, nonatomic) BOOL supportsThumperCallingOverCellularData;
@property (copy, nonatomic) NSString *thumperCallingLocalDeviceID;
@property (readonly, nonatomic) int thumperCallingProvisioningStatus;
@property (readonly, copy, nonatomic) NSURL *thumperCallingProvisioningURL;
@property (readonly, nonatomic, getter=isThumperCallingProvisioningURLInvalid) BOOL thumperCallingProvisioningURLInvalid;
@property (readonly, copy, nonatomic) NSData *thumperCallingProvisioningPostData;
@property (readonly, nonatomic, getter=isThumperCallingAllowedOnDefaultPairedSecondaryDevice) BOOL thumperCallingAllowedOnDefaultPairedSecondaryDevice;

- (void)setWiFiCallingRoamingEnabled:(BOOL)a0;
- (BOOL)isThumperCallingAllowedOnSecondaryDeviceWithID:(id)a0;
- (void)invalidateAndRefreshThumperCallingProvisioningURL;
- (void)setThumperCallingEnabled:(BOOL)a0;
- (void)setThumperCallingAllowedOnDefaultPairedSecondaryDevice:(BOOL)a0;
- (void).cxx_destruct;
- (void)invalidateAndRefreshWiFiCallingProvisioningURL;
- (void)setThumperCallingAllowed:(BOOL)a0 onSecondaryDeviceWithID:(id)a1;
- (void)setVoLTECallingEnabled:(BOOL)a0;
- (void)setWiFiCallingEnabled:(BOOL)a0;
- (id)debugDescription;
- (id)initWithSenderIdentityUUID:(id)a0 state:(id)a1 client:(id)a2;
- (void)requestPinFromPrimaryDeviceForThumperCalling;
- (void)cancelPinRequestFromPrimaryDeviceForThumperCalling;
- (void)_sendNotificationsAndCallbacksComparingToOldSenderIdentityCapabilities:(id)a0;

@end
