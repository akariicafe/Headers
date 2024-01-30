@interface HFFaucetServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (BOOL)containsActions;
- (id)_subclass_updateWithOptions:(id)a0;
- (id)currentStateActionBuildersForHome:(id)a0;
- (BOOL)_shouldSubsumeValveInOverallActiveState;
- (id)createControlItemsWithOptions:(id)a0;
- (id)servicesToReadForCharacteristicType:(id)a0;

@end
