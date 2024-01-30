@class TCProgressStage, OITSUProgressContext, NSDate, NSMutableArray;

@interface TCProgressContext : NSObject {
    OITSUProgressContext *m_parentProgressContext;
    TCProgressStage *m_currentStage;
    NSDate *m_lastReportTime;
    NSMutableArray *m_stackOfBranches;
}

+ (double)currentPosition;
+ (void)setProgress:(double)a0;
+ (void)setMessage:(id)a0;
+ (void)removeProgressObserver:(id)a0;
+ (void)addProgressObserver:(id)a0 selector:(SEL)a1;
+ (void)advanceProgress:(double)a0;
+ (void)createStageWithSteps:(double)a0 takingSteps:(double)a1;
+ (void)endStage;
+ (void)advanceProgressInContext:(id)a0 progress:(double)a1;
+ (id)contextForCurrentThread;
+ (id)createBranchWithSteps:(double)a0 takingSteps:(double)a1 name:(id)a2;
+ (void)createContextForCurrentThreadWithParentContext:(id)a0;
+ (void)createStageWithSteps:(double)a0 takingSteps:(double)a1 name:(id)a2;
+ (void)endBranch:(id)a0;
+ (void)popBranch;
+ (void)pushBranch:(id)a0;
+ (void)removeContextForCurrentThread;
+ (id)stageForCurrentThread;

- (void)dealloc;
- (void)reportProgress:(double)a0;
- (void).cxx_destruct;
- (id)currentStage;
- (id)initWithParentContext:(id)a0;
- (id)rootStage;

@end
