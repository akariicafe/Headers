@interface HFServiceIconFactory : NSObject

+ (id)defaultIconDescriptorForServiceType:(id)a0 serviceSubtype:(id)a1;
+ (id)displayIconDescriptorFromIconDescriptor:(id)a0 symbolName:(id)a1;
+ (id)iconDescriptorForAccessory:(id)a0;
+ (id)iconDescriptorForAccessoryCategoryOrServiceType:(id)a0;
+ (id)_defaultIconDescriptorForServiceType:(id)a0 serviceSubtype:(id)a1 fallbackToPlaceholderIcon:(BOOL)a2;
+ (id)_iconSetForServiceType:(id)a0 serviceSubtype:(id)a1 fallbackToPlaceholderIcon:(BOOL)a2;
+ (id)_multiSubtypeIconSetForServiceType:(id)a0 serviceSubtype:(id)a1;
+ (id)_replacementIdentifierForIconIdentifier:(id)a0;
+ (id)allIconDescriptorsForService:(id)a0;
+ (id)allIconDescriptorsForServiceType:(id)a0 serviceSubtype:(id)a1;
+ (id)defaultIconDescriptorForService:(id)a0;
+ (id)defaultSymbolIconIdentifierForServiceType:(id)a0;
+ (id)iconDescriptorForAccessoryCategory:(id)a0;
+ (id)iconDescriptorWithIdentifier:(id)a0 forService:(id)a1;
+ (id)iconDescriptorWithIdentifier:(id)a0 forServiceType:(id)a1 serviceSubtype:(id)a2;
+ (id)iconModifiersForService:(id)a0;
+ (id)overrideIconDescriptorForMultiServiceAccessory:(id)a0 iconDescriptor:(id)a1;

@end
