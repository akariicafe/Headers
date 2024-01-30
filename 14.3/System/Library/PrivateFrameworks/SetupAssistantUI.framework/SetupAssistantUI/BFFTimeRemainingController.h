@class NSDateComponentsFormatter;

@interface BFFTimeRemainingController : OBSetupAssistantProgressController

@property (retain) NSDateComponentsFormatter *durationFormatter;

- (void).cxx_destruct;
- (void)setProgress:(double)a0;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (id)timeRemainingString:(double)a0;
- (void)setTimeRemainingEstimate:(double)a0;

@end
