@class AEAssessmentConfiguration, _TtC9AACClient20AECAssessmentSession;
@protocol AEAssessmentSessionDelegate;

@interface AEAssessmentSession : NSObject <AACClient.AECAssessmentSessionDelegate> {
    _TtC9AACClient20AECAssessmentSession *_backingSession;
}

@property (weak, nonatomic) id<AEAssessmentSessionDelegate> delegate;
@property (readonly, copy, nonatomic) AEAssessmentConfiguration *configuration;
@property (readonly, nonatomic, getter=isActive) BOOL active;

- (void)end;
- (void)begin;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)assessmentSessionDidBegin:(id)a0;
- (void)assessmentSessionDidEnd:(id)a0;
- (void)assessmentSession:(id)a0 failedToBeginWithError:(id)a1;
- (void)assessmentSession:(id)a0 wasInterruptedWithError:(id)a1;
- (void)assessmentSessionDidUpdate:(id)a0;
- (void)assessmentSesson:(id)a0 failedToUpdateToConfiguration:(id)a1 error:(id)a2;
- (void)updateToConfiguration:(id)a0;

@end
