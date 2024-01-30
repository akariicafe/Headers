@class _MXExtensionProvider;
@protocol _MXExtensionManagerDelegate, _MXExtensionLookupPolicy;

@interface _MXExtensionManager : NSObject

@property (retain, nonatomic) id matchingContext;
@property (weak, nonatomic) id<_MXExtensionManagerDelegate> delegate;
@property (retain, nonatomic) _MXExtensionProvider *extensionProvider;
@property (readonly, nonatomic) id<_MXExtensionLookupPolicy> lookupPolicy;

+ (id)lookupPolicyForExtensionWithCapabilities:(id)a0;
+ (id)restaurantQueueingIntentClassNames;
+ (id)lookupPolicyForExtensionWithCapability:(id)a0;
+ (id)lookupPolicyForRestaurantReservationExtensions;
+ (id)_maps_ridesharingAllIntentClassesForNonUIHandling;
+ (id)_lookupPolicyForExtensionSupportsIntentClassNames:(id)a0;
+ (id)_maps_lookupPolicyForEnabledRidesharingNonUIExtensions;
+ (id)_lookupPolicyForExtensionWithContainingAppIdentifier:(id)a0 supportsIntentClassNames:(id)a1;
+ (id)_extensionsWithLookupPolicy:(id)a0;
+ (void)_maps_updateRideBookingExtensions:(id)a0;
+ (id)_maps_ridesharingOptionalIntentClassesForNonUIHandling;
+ (id)managerWithLookupPolicy:(id)a0 delegate:(id)a1;
+ (id)_lookupPolicyForAllExtensions;
+ (id)_queue;
+ (id)_maps_ridesharingIntentClassesForUIInteraction;
+ (id)_lookupPolicyForIntentsExtensions;
+ (id)managerWithExtensionLookupPolicy:(id)a0 updateHandler:(id /* block */)a1;
+ (id)lookupPolicyForRestaurantQueueingExtensionWithContainingAppIdentifier:(id)a0;
+ (id)_lookupPolicyForExtensionWithIdentifier:(id)a0;
+ (id)_lookupPolicyWithBlock:(id /* block */)a0;
+ (void)imageForKey:(id)a0 extension:(id)a1 completion:(id /* block */)a2;
+ (id)lookupPolicyForRestaurantQueueingExtensions;
+ (id)_lookupPolicyForNonUIExtension;
+ (id)_maps_lookupPolicyForRidesharingNonUIExtensions;
+ (id)_maps_ridesharingRequiredIntentClassesForNonUIHandling;
+ (id)restaurantReservationIntentClassNames;
+ (id)_lookupPolicyWithExtensionPointNames:(id)a0;
+ (id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifier:(id)a0;
+ (id)_lookupPolicyForUIExtension;

- (id)initWithLookupPolicy:(id)a0 delegate:(id)a1;
- (void).cxx_destruct;
- (void)invalidate;
- (id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)a0;
- (void)dealloc;
- (id)initWithLookupPolicy:(id)a0 delegate:(id)a1 extensionProvider:(id)a2;

@end
