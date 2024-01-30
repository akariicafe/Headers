@class TSUProgressContext;

@interface TSUProgressStage : NSObject {
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    double m_startInParent;
    double m_nextSubStageParentSize;
    TSUProgressStage *m_parentStage;
    TSUProgressContext *m_context;
}

- (void)end;
- (id)description;
- (double)currentPosition;
- (void)setProgress:(double)a0;
- (void)dealloc;
- (double)overallProgress;
- (id)initRootStageInContext:(id)a0;
- (id)initWithSteps:(double)a0 takingSteps:(double)a1 inContext:(id)a2;
- (double)nextSubStageParentSize;
- (void)setNextSubStageParentSize:(double)a0;
- (id)parentStage;
- (void)advanceProgress:(double)a0;
- (void)setProgressPercentage:(double)a0;

@end
