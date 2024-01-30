@class NSString, PMLGradientSolver;

@interface PMLLogisticRegressionModel : NSObject <PMLMultiLabelClassifierProtocol, PMLPlistAndChunksSerializableProtocol> {
    PMLGradientSolver *_solver;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)solverWithWeights:(id)a0 andIntercept:(BOOL)a1;
+ (id)solverWithWeights:(id)a0;
+ (id)solverWithWeights:(id)a0 andIntercept:(BOOL)a1 learningRate:(float)a2 minIterations:(unsigned long long)a3 stoppingThreshold:(float)a4;
+ (id)withWeights:(id)a0;
+ (id)withWeights:(id)a0 andIntercept:(BOOL)a1;

- (id)serialize;
- (void).cxx_destruct;
- (id)initWithSolver:(id)a0;
- (id)predict:(id)a0;
- (id)weights;
- (id)toPlistWithChunks:(id)a0;
- (id)initWithPlist:(id)a0 chunks:(id)a1 context:(id)a2;
- (unsigned long long)outputDimension;

@end
