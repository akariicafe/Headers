@class NSString, TCProgressContext;

@interface TCProgressStage : NSObject {
    double m_currentPosition;
    double m_totalSteps;
    double m_stepsInParent;
    NSString *m_name;
    TCProgressStage *m_parentStage;
    TCProgressContext *m_context;
}

- (double)currentPosition;
- (void)setProgress:(double)a0;
- (void)end;
- (void)dealloc;
- (void).cxx_destruct;
- (void)advanceProgress:(double)a0;
- (id)initRootStageInContext:(id)a0;
- (id)parentStage;
- (id)initBranchWithSteps:(double)a0 takingSteps:(double)a1 name:(id)a2 inContext:(id)a3;
- (id)initWithSteps:(double)a0 takingSteps:(double)a1 name:(id)a2 inContext:(id)a3;

@end
