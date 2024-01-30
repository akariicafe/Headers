@class HMDCameraAudioParameterSelection, NSString, HMDCameraStreamSessionID, HMDCameraVideoParameterSelection;

@interface HMDCameraParameterSelection : HMFObject <HMFLogging>

@property (readonly, nonatomic) HMDCameraStreamSessionID *sessionID;
@property (retain, nonatomic) HMDCameraVideoParameterSelection *videoParameterSelection;
@property (retain, nonatomic) HMDCameraAudioParameterSelection *audioParameterSelection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithSessionID:(id)a0;
- (id)logIdentifier;
- (BOOL)findBestMatchWithProtocolParameters:(id)a0 streamingCapabilities:(id)a1 videoTierParameters:(id)a2;
- (void)setSelectedEndPointSetupParameters:(id)a0 videoNetworkConfig:(id)a1 audioNetworkConfig:(id)a2;
- (void)setSelectedConfigParameters:(id)a0;
- (void)setReselectedConfigParameters:(id)a0 videoTier:(id)a1;

@end
