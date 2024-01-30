@interface HFIrrigationSystemServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)_childValveServiceFilter;
- (id)servicesToReadForCharacteristicType:(id)a0;
- (BOOL)containsActions;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)createControlItems;
- (id)_subclass_updateWithOptions:(id)a0;

@end
