@class NSString, TCProgressContext;

@interface TCProgressStage : NSObject {
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    NSString *m_name;
    TCProgressStage *m_parentStage;
    TCProgressContext *m_context;
}

- (void)end;
- (double)currentPosition;
- (void)setProgress:(double)a0;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initRootStageInContext:(id)a0;
- (id)parentStage;
- (void)advanceProgress:(double)a0;
- (id)initWithSteps:(double)a0 takingSteps:(double)a1 name:(id)a2 inContext:(id)a3;
- (id)initBranchWithSteps:(double)a0 takingSteps:(double)a1 name:(id)a2 inContext:(id)a3;

@end
