@interface HFIrrigationSystemServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)_subclass_updateWithOptions:(id)a0;
- (id)createControlItems;
- (id)servicesToReadForCharacteristicType:(id)a0;
- (BOOL)containsActions;
- (id)currentStateActionBuildersForHome:(id)a0;
- (id)_childValveServiceFilter;

@end
