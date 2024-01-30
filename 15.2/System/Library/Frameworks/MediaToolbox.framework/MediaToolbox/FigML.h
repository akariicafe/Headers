@class MLModel, NSString, NSURL, BMStoreStream, BPSPublisher, NSObject, NSFileManager, MLModelConfiguration;
@protocol OS_dispatch_queue;

@interface FigML : NSObject {
    NSString *modelName;
    NSURL *modelPath;
    NSObject<OS_dispatch_queue> *stateQueue;
    MLModel *mlModel;
    BMStoreStream *biomeStream;
    BPSPublisher *biomePublisher;
    NSFileManager *fileManager;
    MLModelConfiguration *modelConfiguration;
    unsigned char isMLModelEligibleForExecution;
    unsigned char didSetupTrial;
    unsigned char initialized;
}

@property (readonly, nonatomic) NSURL *defaultCompiledModelPath;

- (BOOL)loadModelFromPath:(id)a0 failedWithError:(id *)a1;
- (BOOL)ensureModel:(id *)a0;
- (void)ensureInternalState;
- (BOOL)setupBiomeStream:(id)a0 failedWithError:(id *)a1;
- (void)writeTrainingData:(id)a0;
- (BOOL)setupTrialAndRetrieveConfigWithError:(id *)a0;
- (id)readTrainingDataWithError:(id *)a0;
- (id)getPredictionWithDictionary:(id)a0 failedWithError:(id *)a1;
- (BOOL)trainMLModelWithData:(id)a0 progressHandlers:(id)a1 failedWithError:(id *)a2;
- (id)initWithModelName:(id)a0 modelConfiguration:(id)a1 failedWithError:(id *)a2;
- (void)dealloc;

@end
