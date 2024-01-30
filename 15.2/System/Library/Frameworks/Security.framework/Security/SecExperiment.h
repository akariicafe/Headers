@class NSString, SecExperimentConfig;

@interface SecExperiment : NSObject

@property (retain) NSString *name;
@property (nonatomic) BOOL samplingDisabled;
@property (retain) SecExperimentConfig *cachedConfig;
@property (readonly) NSString *identifier;

- (void).cxx_destruct;
- (id)initWithName:(const char *)a0;
- (BOOL)experimentIsAllowedForProcess;
- (BOOL)isSamplingDisabledWithDefault:(BOOL)a0;
- (BOOL)isSamplingDisabled;
- (id)copyExperimentConfiguration;
- (id)copyRemoteExperimentAsset;
- (id)copyExperimentConfigurationFromUserDefaults;
- (id)copyRandomExperimentConfigurationFromAsset:(id)a0;

@end
