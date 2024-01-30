@protocol TRIPaths;

@interface TRIClientExperimentStorage : NSObject {
    id<TRIPaths> _paths;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithPaths:(id)a0;
- (id)loadArtifactWithExperiment:(id)a0 isFilePresent:(BOOL *)a1;
- (id)_urlForExperiment:(id)a0;
- (BOOL)saveArtifact:(id)a0;
- (BOOL)removeArtifactWithExperiment:(id)a0;

@end
