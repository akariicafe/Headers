@interface HFBlindsServiceItem : HFDoorServiceItem

+ (id)supportedServiceTypes;

- (id)createControlItems;
- (long long)_doorServicePriority;

@end
