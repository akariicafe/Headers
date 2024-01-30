@class NSDateComponentsFormatter;

@interface BFFTimeRemainingController : OBSetupAssistantProgressController

@property (retain) NSDateComponentsFormatter *durationFormatter;

- (void)setProgress:(double)a0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 detailText:(id)a1 icon:(id)a2;
- (void)setTimeRemainingEstimate:(double)a0;
- (id)timeRemainingString:(double)a0;

@end
