@class NSString, ATSSuggestion;

@interface ATSFeedback : NSObject

@property (nonatomic) long long action;
@property (retain, nonatomic) ATSSuggestion *suggestion;
@property (retain, nonatomic) NSString *automationIdentifier;

+ (id)feedbackForAction:(long long)a0 suggestion:(id)a1 automationIdentifier:(id)a2;

- (id)description;
- (void).cxx_destruct;
- (void)submitTelemetryFeedback;

@end
