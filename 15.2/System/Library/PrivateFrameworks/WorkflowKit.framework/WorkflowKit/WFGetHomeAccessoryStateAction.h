@class NSString;

@interface WFGetHomeAccessoryStateAction : WFAction <WFHomeManagerEventObserver>

@property (readonly, nonatomic) NSString *homeIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeAccessoryStateActionWithHome:(id)a0;

- (id)localizedName;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)homeName;
- (id)home;
- (void)dealloc;
- (id)characteristic;
- (void)runAsynchronouslyWithInput:(id)a0;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (void)initializeParameters;
- (id)localizedDescriptionSummary;
- (id)localizedAttribution;
- (id)outputMeasurementUnitType;
- (id)localizedDefaultOutputName;
- (void)updateCharacteristicsEnumeration;

@end
