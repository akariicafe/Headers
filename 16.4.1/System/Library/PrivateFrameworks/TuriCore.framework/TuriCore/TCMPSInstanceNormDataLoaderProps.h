@class MPSVector, MPSCNNNormalizationGammaAndBetaState;
@protocol MTLBuffer;

@interface TCMPSInstanceNormDataLoaderProps : NSObject

@property (retain, nonatomic) MPSVector *gammaVector;
@property (retain, nonatomic) MPSVector *betaVector;
@property (retain, nonatomic) MPSVector *gammaMomentumVector;
@property (retain, nonatomic) MPSVector *gammaVelocityVector;
@property (retain, nonatomic) MPSVector *betaMomentumVector;
@property (retain, nonatomic) MPSVector *betaVelocityVector;
@property (retain, nonatomic) id<MTLBuffer> movingMeanBuffer;
@property (retain, nonatomic) id<MTLBuffer> movingVarianceBuffer;
@property (retain, nonatomic) id<MTLBuffer> gammaMomentumBuffer;
@property (retain, nonatomic) id<MTLBuffer> gammaVelocityBuffer;
@property (retain, nonatomic) id<MTLBuffer> betaMomentumBuffer;
@property (retain, nonatomic) id<MTLBuffer> betaVelocityBuffer;
@property (retain, nonatomic) id<MTLBuffer> gammaBuffer;
@property (retain, nonatomic) id<MTLBuffer> betaBuffer;
@property (retain, nonatomic) MPSCNNNormalizationGammaAndBetaState *state;

- (void).cxx_destruct;

@end
