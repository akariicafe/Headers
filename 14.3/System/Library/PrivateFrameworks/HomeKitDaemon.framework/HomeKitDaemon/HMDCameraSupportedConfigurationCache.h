@class HMDSupportedAudioStreamConfiguration, HMDSupportedRTPConfiguration, HMDSupportedVideoStreamConfiguration;

@interface HMDCameraSupportedConfigurationCache : HMFObject

@property (readonly, nonatomic, getter=isValid) BOOL valid;
@property (retain, nonatomic) HMDSupportedVideoStreamConfiguration *supportedVideoStreamConfiguration;
@property (retain, nonatomic) HMDSupportedAudioStreamConfiguration *supportedAudioStreamConfiguration;
@property (retain, nonatomic) HMDSupportedRTPConfiguration *supportedRTPConfiguration;

- (void).cxx_destruct;

@end
