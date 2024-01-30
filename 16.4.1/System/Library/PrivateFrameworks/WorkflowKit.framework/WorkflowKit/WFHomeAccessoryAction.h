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

- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)localizedName;
- (void)dealloc;
- (id)homeName;
- (void)initializeParameters;
- (id)localizedAttribution;
- (id)localizedDescriptionSummary;
- (void)localizedParameterSummaryWithCompletion:(id /* block */)a0;
- (id)localizedSummaryText;
- (id)parameterSummaryString;
- (void)performHomeAccessoryAction;
- (void)runAsynchronouslyWithInput:(id)a0;

@end
