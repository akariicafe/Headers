@class PTCinematographyRefinement;

@interface BWRefinedCinematographyNode : BWNode {
    PTCinematographyRefinement *_refinementSession;
    BOOL _isRefinementSessionActive;
}

+ (void)initialize;

- (id)nodeSubType;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)init;
- (void)_flush;
- (void)dealloc;
- (void)_attachRefinedFramesToSbuf:(struct opaqueCMSampleBuffer { } *)a0;

@end
