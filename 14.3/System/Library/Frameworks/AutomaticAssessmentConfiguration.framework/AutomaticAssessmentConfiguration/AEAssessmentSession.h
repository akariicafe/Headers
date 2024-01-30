@class _TtC15AACDependencies27AEDBackingAssessmentSession;
@protocol AEAssessmentSessionDelegate;

@interface AEAssessmentSession : NSObject <AACDependencies.AEDBackingAssessmentSessionDelegate> {
    _TtC15AACDependencies27AEDBackingAssessmentSession *_backingSession;
}

@property (weak, nonatomic) id<AEAssessmentSessionDelegate> delegate;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void)begin;
- (void)end;
- (void).cxx_destruct;
- (id)initWithConfiguration:(id)a0;
- (void)backingAssessmentSessionDidBegin:(id)a0;
- (void)backingAssessmentSession:(id)a0 failedToBeginWithError:(id)a1;
- (void)backingAssessmentSession:(id)a0 wasInterruptedWithError:(id)a1;
- (void)backingAssessmentSessionDidEnd:(id)a0;

@end
