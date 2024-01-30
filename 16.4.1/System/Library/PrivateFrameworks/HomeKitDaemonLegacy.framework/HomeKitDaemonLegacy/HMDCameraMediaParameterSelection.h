@class HMDCameraAudioParameterSelection, HMDCameraVideoParameterSelection;

@interface HMDCameraMediaParameterSelection : HMDCameraParameterSelection

@property (retain, nonatomic) HMDCameraVideoParameterSelection *videoParameterSelection;
@property (retain, nonatomic) HMDCameraAudioParameterSelection *audioParameterSelection;

- (void).cxx_destruct;
- (BOOL)findBestMatchWithProtocolParameters:(id)a0 streamingCapabilities:(id)a1 videoTierParameters:(id)a2;
- (void)setReselectedConfigParameters:(id)a0 videoTier:(id)a1;
- (void)setSelectedConfigParameters:(id)a0;
- (void)setSelectedEndPointSetupParameters:(id)a0 videoNetworkConfig:(id)a1 audioNetworkConfig:(id)a2;

@end
