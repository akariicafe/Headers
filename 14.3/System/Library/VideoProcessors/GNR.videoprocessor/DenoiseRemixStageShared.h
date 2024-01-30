@class DenoiseRemixShaders;

@interface DenoiseRemixStageShared : NSObject {
    DenoiseRemixShaders *_denoiseShaders[2][2][2];
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)getShaders:(id)a0 lumaFP16:(BOOL)a1 chromaFP16:(BOOL)a2 lGAAlgorithm:(int)a3;

@end
