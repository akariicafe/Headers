@class WFDevice;

@interface WFDeviceDetailsContentItem : WFContentItem <WFContentItemClass>

@property (readonly, nonatomic) WFDevice *device;

+ (id)typeDescription;
+ (id)propertyBuilders;
+ (id)ownedTypes;
+ (id)contentCategories;
+ (id)pluralTypeDescription;
+ (id)countDescription;

@end
