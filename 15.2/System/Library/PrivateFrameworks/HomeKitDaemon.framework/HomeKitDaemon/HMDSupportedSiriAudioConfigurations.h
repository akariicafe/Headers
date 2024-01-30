@class NSArray, HAPAudioStreamCodecConfiguration;

@interface HMDSupportedSiriAudioConfigurations : NSObject

@property (nonatomic) long long siriInputType;
@property (retain, nonatomic) NSArray *supportedConfigurations;
@property (retain, nonatomic) HAPAudioStreamCodecConfiguration *selectedConfiguration;

- (void).cxx_destruct;

@end
