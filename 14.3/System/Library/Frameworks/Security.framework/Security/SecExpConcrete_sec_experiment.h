@class NSString, SecExperiment;

@interface SecExpConcrete_sec_experiment : NSObject <OS_sec_experiment> {
    SecExperiment *innerExperiment;
    unsigned long long numRuns;
    unsigned long long successRuns;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithInnerExperiment:(id)a0;
- (BOOL)experimentIsAllowedForProcess;
- (BOOL)isSamplingDisabledWithDefault:(BOOL)a0;
- (BOOL)isSamplingDisabled;
- (id)copyExperimentConfiguration;
- (const char *)name;
- (id)initWithName:(const char *)a0;
- (const char *)identifier;

@end
