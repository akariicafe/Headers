@class NSString, TRIClient, NSObject;
@protocol OS_dispatch_queue;

@interface SGTrialClientWrapper : NSObject {
    TRIClient *_triClient;
    NSObject<OS_dispatch_queue> *_serialQueue;
    NSString *_namespaceName;
    NSString *_experimentId;
    int _deploymentId;
    NSString *_treatmentId;
}

- (id)experimentId;
- (void).cxx_destruct;
- (id)initWithClientIdentifier:(int)a0;
- (id)deploymentId;
- (id)modelPath;
- (id)treatmentId;
- (void)updateFactors;
- (id)baseModelName;
- (BOOL)refreshEnrollmentInformationForNamespace:(id)a0;
- (void)uncompressModelAndUpdateFactors:(id)a0 destinationPath:(id)a1;
- (BOOL)_uncompressModelAtPath:(id)a0 toPath:(id)a1;
- (BOOL)_unarchiveFrom:(id)a0 to:(id)a1;
- (void)cleanExperimentModelsFromTrialModelsFolder;
- (id)modelPathForCurrentEnrollment;
- (id)modelPathForTriClient:(id)a0 andNamespace:(id)a1;
- (id)modelPathForExperimentId:(id)a0 treatmentId:(id)a1 deploymentId:(id)a2;
- (id)_modelPathForExperimentId:(id)a0 treatmentId:(id)a1 deploymentId:(id)a2 createIfNeeded:(BOOL)a3;
- (id)_modelDirectoryPathCreateIfNeeded:(BOOL)a0;
- (id)_modelNameForCurrentEnrollment;
- (id)_modelNameForExperimentId:(id)a0 treatmentId:(id)a1 deploymentId:(id)a2;

@end
