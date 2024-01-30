@class SiriAnalyticsClientMessageStream;

@interface SASActivationInstrumentationSender : NSObject {
    SiriAnalyticsClientMessageStream *_analyticsStream;
}

- (void).cxx_destruct;
- (id)_clientEventWithActivationEventIdentifier:(id)a0;
- (id)initWithAnalyticsStream:(id)a0;
- (void)instrumentButtonInteractionType:(int)a0 buttonIdentifier:(id)a1 activationEventIdentifier:(id)a2;
- (void)instrumentTurnActivatedWithTurnId:(id)a0 activationEventIdentifier:(id)a1;

@end
