@interface HFAirPurifierServiceItem : HFServiceItem

+ (id)supportedServiceTypes;

- (id)createControlItems;
- (id)_subclass_updateWithOptions:(id)a0;

@end
