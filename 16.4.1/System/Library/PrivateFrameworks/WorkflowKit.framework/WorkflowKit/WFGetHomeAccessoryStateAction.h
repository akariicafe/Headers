@class NSString;

@interface WFGetHomeAccessoryStateAction : WFAction <WFHomeManagerEventObserver>

@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeAccessoryStateActionWithHome:(id)a0;

- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)localizedName;
- (id)home;
- (void)dealloc;
- (id)homeName;
- (id)characteristic;
- (void)initializeParameters;
- (id)localizedAttribution;
- (id)localizedDefaultOutputName;
- (id)localizedDescriptionSummary;
- (id)outputContentClasses;
- (id)outputMeasurementUnitType;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (void)updateCharacteristicsEnumeration;

@end
