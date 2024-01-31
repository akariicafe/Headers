@class AEAssessmentConfiguration, AECAssessmentSessionWrapper;
@protocol AEAssessmentSessionDelegate;

@interface AEAssessmentSession : NSObject <AECAssessmentSessionWrapperDelegate> {
    AECAssessmentSessionWrapper *_sessionWrapper;
}

@property (weak, nonatomic) id<AEAssessmentSessionDelegate> delegate;
@property (readonly, copy, nonatomic) AEAssessmentConfiguration *configuration;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void)begin;
- (void)end;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)assessmentSessionWrapperDidEnd:(id)a0;
- (void)assessmentSessionWrapper:(id)a0 failedToBeginWithError:(id)a1;
- (void)assessmentSessionWrapper:(id)a0 failedToUpdateToConfigurationWrapper:(id)a1 error:(id)a2;
- (void)assessmentSessionWrapper:(id)a0 wasInterruptedWithError:(id)a1;
- (void)assessmentSessionWrapperDidBegin:(id)a0;
- (void)assessmentSessionWrapperDidUpdate:(id)a0;
- (void)__updateToConfiguration:(id)a0;
- (void)updateToConfiguration:(id)a0;

@end
