@class NSString, HMDCameraStreamSessionID;

@interface HMDCameraParameterSelectionBase : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0;
- (id)_selectSRTPParameters:(id)a0;
- (id)_filterFor:(id)a0 preferenceList:(id)a1 deviceSupportedTypes:(id)a2 cameraSupportedTypes:(id)a3 localPreferences:(id)a4;
- (id)_selectCryptoSuite:(id)a0;

@end
