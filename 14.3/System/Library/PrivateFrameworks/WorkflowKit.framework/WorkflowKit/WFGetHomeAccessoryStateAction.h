@class NSString;

@interface WFGetHomeAccessoryStateAction : WFAction <WFHomeManagerEventObserver>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)homeAccessoryStateActionWithHome:(id)a0;

- (id)home;
- (void)dealloc;
- (id)homeName;
- (id)characteristic;
- (void)homeManagerDidUpdateHomes:(id)a0;
- (id)localizedName;
- (void)initializeParameters;
- (void)runAsynchronouslyWithInput:(id)a0;
- (id)localizedDescriptionSummary;
- (id)localizedAttribution;
- (BOOL)setParameterState:(id)a0 forKey:(id)a1;
- (id)outputContentClasses;
- (id)outputMeasurementUnitType;
- (id)localizedDefaultOutputName;
- (void)updateCharacteristicsEnumeration;

@end
