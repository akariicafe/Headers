@class NSString, NSDictionary;

@interface SecExperimentConfig : NSObject

@property (retain) NSString *identifier;
@property (retain) NSDictionary *config;
@property unsigned int fleetSampleRate;
@property unsigned int deviceSampleRate;
@property (retain) NSDictionary *configurationData;
@property (readonly) BOOL isSampled;

- (id)initWithConfiguration:(id)a0;
- (unsigned int)hostHash;
- (void).cxx_destruct;
- (BOOL)shouldRunWithSamplingRate:(id)a0;

@end
