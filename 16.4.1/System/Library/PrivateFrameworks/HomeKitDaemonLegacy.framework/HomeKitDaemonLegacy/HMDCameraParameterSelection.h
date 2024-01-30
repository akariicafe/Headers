@class NSString, HMDCameraStreamSessionID;

@interface HMDCameraParameterSelection : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)_selectedCryptoSuiteFromCameraCryptoSuites:(id)a0;
+ (id)selectedParametersFromPreferredParameters:(id)a0 deviceSupportedParameters:(id)a1 cameraSupportedParameters:(id)a2 overriddenParameters:(id)a3 parameterDescription:(id)a4;
+ (id)selectedSRTPParametersFromCryptoSuites:(id)a0;

- (id)logIdentifier;
- (id)initWithSessionID:(id)a0;
- (void).cxx_destruct;

@end
