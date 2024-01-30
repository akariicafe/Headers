@class HMHome, NSArray, NSString;

@interface WFHomeAccessoryAction : WFAction <WFHomeManagerEventObserver>

@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSArray *actionSets;
@property (readonly, nonatomic) NSArray *shortcutsDictionaryRepresentations;
@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)a0;
+ (id)homeAccessoryActionWithHome:(id)a0 actionSets:(id)a1;

- (id)localizedName;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)homeName;
- (void)dealloc;
- (void)runAsynchronouslyWithInput:(id)a0;
- (void)initializeParameters;
- (id)localizedDescriptionSummary;
- (id)localizedAttribution;
- (void)performHomeAccessoryAction;
- (id)parameterSummaryString;
- (void)localizedParameterSummaryWithCompletion:(id /* block */)a0;
- (id)localizedSummaryText;

@end
