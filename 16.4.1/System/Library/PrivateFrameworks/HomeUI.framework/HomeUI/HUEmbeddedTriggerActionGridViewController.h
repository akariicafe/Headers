@interface HUEmbeddedTriggerActionGridViewController : HomeUI.EmbeddedActionGridViewController <HUTriggerSummaryActionGridViewControllerProtocol>

@property (nonatomic, retain) void /* unknown type, empty encoding */ triggerBuilder;
@property (nonatomic, weak) void /* unknown type, empty encoding */ triggerActionGridDelegate;

- (void).cxx_destruct;
- (void)reloadActions;
- (id)initWithTriggerBuilder:(id)a0;

@end
