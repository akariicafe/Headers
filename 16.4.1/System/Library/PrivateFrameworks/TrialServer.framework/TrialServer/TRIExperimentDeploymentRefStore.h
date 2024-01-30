@class TRIServerContext;

@interface TRIExperimentDeploymentRefStore : NSObject <TRIPathReferencing> {
    TRIServerContext *_context;
}

- (void).cxx_destruct;
- (BOOL)hasReferenceToPath:(id)a0;
- (id)initWithServerContext:(id)a0;

@end
