@class NSString, SecExperimentConfig;

@interface SecExperiment : NSObject

@property (retain) NSString *name;
@property (nonatomic) BOOL samplingDisabled;
@property (retain) SecExperimentConfig *cachedConfig;
@property (readonly) NSString *identifier;

- (void).cxx_destruct;
- (BOOL)experimentIsAllowedForProcess;
- (BOOL)isSamplingDisabledWithDefault:(BOOL)a0;
- (BOOL)isSamplingDisabled;
- (id)copyExperimentConfiguration;
- (id)copyExperimentConfigurationFromUserDefaults;
- (id)copyRemoteExperimentAsset;
- (id)copyRandomExperimentConfigurationFromAsset:(id)a0;
- (id)initWithName:(const char *)a0;

@end
