@interface HFBlindsServiceItem : HFDoorServiceItem

+ (id)supportedServiceTypes;

- (long long)_doorServicePriority;
- (id)createControlItemsWithOptions:(id)a0;

@end
