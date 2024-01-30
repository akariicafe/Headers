@class NSUUID, SASActivationInstrumentationSender;

@interface SASActivationInstrumentation : NSObject {
    SASActivationInstrumentationSender *_instrumentationSender;
}

@property (readonly) NSUUID *activationEventIdentifier;

- (void).cxx_destruct;
- (void)_instrumentButtonInteractionType:(int)a0 buttonIdentifier:(id)a1;
- (id)buttonDownWithIdentifier:(id)a0;
- (id)buttonTapWithIdentifier:(id)a0 associateWithButtonDown:(BOOL)a1;
- (id)buttonUpWithIdentifier:(id)a0;
- (id)initWithAnalyticsStream:(id)a0;
- (id)mostRecentAtivationEvenIdentifier;

@end
