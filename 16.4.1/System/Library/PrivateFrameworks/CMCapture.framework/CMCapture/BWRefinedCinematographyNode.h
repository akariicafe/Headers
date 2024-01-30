@class PTCinematographyRefinement;

@interface BWRefinedCinematographyNode : BWNode {
    PTCinematographyRefinement *_refinementSession;
    BOOL _isRefinementSessionActive;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)nodeType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (id)init;

@end
