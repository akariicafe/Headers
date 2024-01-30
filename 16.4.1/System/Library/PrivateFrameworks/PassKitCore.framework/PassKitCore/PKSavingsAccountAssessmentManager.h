@class PKODIServiceProviderAssessment;

@interface PKSavingsAccountAssessmentManager : NSObject {
    long long _type;
    PKODIServiceProviderAssessment *_odiServiceProviderAssessment;
}

- (long long)type;
- (id)initWithType:(long long)a0;
- (void).cxx_destruct;
- (void)provideSessionFeedbackDiscarded;
- (void)_restartODIAssessment;
- (id)_serviceProviderIdentifierForAssessmentType;
- (void)provideSessionFeedbackIngested;
- (void)updateAssessmentType:(long long)a0;
- (void)waitForAssessmentWithCompletion:(id /* block */)a0;

@end
