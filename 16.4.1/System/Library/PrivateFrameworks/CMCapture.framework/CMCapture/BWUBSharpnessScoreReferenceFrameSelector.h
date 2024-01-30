@class CMISharpnessScore;

@interface BWUBSharpnessScoreReferenceFrameSelector : NSObject {
    CMISharpnessScore *_sharpnessScoreCalculator;
    int _candidateFrameCount;
    int _receivedCandidateFrameCount;
    struct opaqueCMSampleBuffer { } *_currentCandidateFrame;
    float _currentCandidateSharpnessScore;
    BOOL _faceScoresEnabled;
    int _maxNumberOfFaceScores;
}

+ (id)externalMemoryDescriptorWithMaxInputDimensions:(struct { int x0; int x1; })a0;

- (void)dealloc;
- (struct opaqueCMSampleBuffer { } *)addReferenceFrameCandidate:(struct opaqueCMSampleBuffer { } *)a0 referenceFrameOut:(struct opaqueCMSampleBuffer **)a1;
- (id)initWithCommandQueue:(id)a0 externalMemoryResource:(id)a1 candidateCount:(int)a2;

@end
