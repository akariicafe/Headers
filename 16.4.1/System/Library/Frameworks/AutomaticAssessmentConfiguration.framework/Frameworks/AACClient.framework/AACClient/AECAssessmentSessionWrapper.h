@class AECAssessmentConfigurationWrapper, _TtC9AACClient20AECAssessmentSession;
@protocol AECAssessmentSessionWrapperDelegate;

@interface AECAssessmentSessionWrapper : NSObject <AACClient.AECAssessmentSessionDelegate>

@property (readonly, nonatomic) _TtC9AACClient20AECAssessmentSession *session;
@property (weak, nonatomic) id<AECAssessmentSessionWrapperDelegate> delegate;
@property (readonly, nonatomic, getter=isActive) BOOL active;
@property (readonly, nonatomic) AECAssessmentConfigurationWrapper *configurationWrapper;

- (void)begin;
- (void)end;
- (void).cxx_destruct;
- (void)assessmentSession:(id)a0 failedToBeginWithError:(id)a1;
- (void)assessmentSession:(id)a0 wasInterruptedWithError:(id)a1;
- (void)assessmentSessionDidBegin:(id)a0;
- (void)assessmentSessionDidEnd:(id)a0;
- (void)assessmentSessionDidUpdate:(id)a0;
- (void)assessmentSesson:(id)a0 failedToUpdateToConfiguration:(id)a1 error:(id)a2;
- (id)initWithConfigurationWrapper:(id)a0 queue:(id)a1;
- (void)updateToConfigurationWrapper:(id)a0;

@end
