@class HFTriggerActionSetsBuilder, NSString;

@interface WFHomeAccessoryAction : WFAction <WFHomeManagerEventObserver>

@property (readonly, nonatomic) HFTriggerActionSetsBuilder *triggerActionSetsBuilder;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)a0;
+ (id)homeAccessoryActionWithHome:(id)a0;

- (void)dealloc;
- (id)homeName;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)localizedName;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)localizedDescriptionSummary;
- (id)localizedAttribution;
- (void)performHomeAccessoryAction;
- (id)parameterSummaryString;
- (void)localizedParameterSummaryWithCompletion:(id /* block */)a0;
- (id)localizedSummaryText;

@end
