@class NSString, NSDictionary, NSArray, TUCloudCallingDevice;

@interface TUCallCapabilitiesState : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL supportsPrimaryCalling;
@property (nonatomic) BOOL supportsBasebandCalling;
@property (nonatomic) BOOL supportsCellularData;
@property (nonatomic) BOOL supportsDisplayingTelephonyCalls;
@property (nonatomic) BOOL supportsDisplayingFaceTimeAudioCalls;
@property (nonatomic) BOOL supportsDisplayingFaceTimeVideoCalls;
@property (nonatomic, getter=isFaceTimeAudioAvailable) BOOL faceTimeAudioAvailable;
@property (nonatomic, getter=isFaceTimeVideoAvailable) BOOL faceTimeVideoAvailable;
@property (nonatomic, getter=areCTCapabilitiesValid) BOOL ctCapabilitiesValid;
@property (nonatomic) BOOL accountsMatchForSecondaryCalling;
@property (nonatomic) BOOL accountsSupportSecondaryCalling;
@property (nonatomic) BOOL supportsRelayCalling;
@property (nonatomic, getter=isRelayCallingEnabled) BOOL relayCallingEnabled;
@property (nonatomic, getter=areRelayCallingFeaturesEnabled) BOOL relayCallingFeaturesEnabled;
@property (nonatomic) int relayCallingAvailability;
@property (copy, nonatomic) NSDictionary *relayCallingDisabledForDeviceID;
@property (copy, nonatomic) NSString *outgoingRelayCallerID;
@property (nonatomic) BOOL supportsTelephonyRelayCalling;
@property (nonatomic) BOOL supportsFaceTimeAudioRelayCalling;
@property (nonatomic) BOOL supportsFaceTimeVideoRelayCalling;
@property (copy, nonatomic) NSArray *cloudCallingDevices;
@property (readonly, nonatomic) TUCloudCallingDevice *defaultPairedDevice;
@property (nonatomic, getter=isEmergencyCallbackModeEnabled) BOOL emergencyCallbackModeEnabled;
@property (nonatomic, getter=isEmergencyCallbackPossible) BOOL emergencyCallbackPossible;
@property (copy, nonatomic) NSDictionary *senderIdentityCapabilitiesStateByUUID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)publiclyAccessibleCopyWithZone:(struct _NSZone { } *)a0;
- (id)publiclyAccessibleCopy;

@end
