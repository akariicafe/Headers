@class NSString, FCCCompletionOffTrackConfiguration;

@interface FCCompletionOffTrackEvent : NSObject <FCGoalProgressEvent> {
    FCCCompletionOffTrackConfiguration *_configuration;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)goalProgressContentForModel:(id)a0;
- (id)nextFireDateWithModel:(id)a0;
- (double)minimumDayDuration;
- (id)eventIdentifier;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldFireWithTypicalDayModel:(id)a0 evaluationDelegate:(id)a1;

@end
