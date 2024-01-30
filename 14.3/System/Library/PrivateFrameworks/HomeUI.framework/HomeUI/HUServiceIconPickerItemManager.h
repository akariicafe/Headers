@class HFServiceBuilder;

@interface HUServiceIconPickerItemManager : HFItemManager

@property (readonly, nonatomic) HFServiceBuilder *serviceBuilder;

- (id)_serviceType;
- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)a0;
- (id /* block */)_comparatorForSectionIdentifier:(id)a0;
- (id)initWithServiceBuilder:(id)a0 delegate:(id)a1;

@end
