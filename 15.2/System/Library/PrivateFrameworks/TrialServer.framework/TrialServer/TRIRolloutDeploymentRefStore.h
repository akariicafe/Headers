@class TRIServerContext;

@interface TRIRolloutDeploymentRefStore : NSObject <TRIPathReferencing> {
    TRIServerContext *_context;
}

- (void).cxx_destruct;
- (id)initWithServerContext:(id)a0;
- (BOOL)hasReferenceToPath:(id)a0;

@end
