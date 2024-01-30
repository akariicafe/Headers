@class _MXExtensionProvider;
@protocol _MXExtensionManagerDelegate, _MXExtensionLookupPolicy;

@interface _MXExtensionManager : NSObject

@property (retain, nonatomic) id matchingContext;
@property (weak, nonatomic) id<_MXExtensionManagerDelegate> delegate;
@property (retain, nonatomic) _MXExtensionProvider *extensionProvider;
@property (readonly, nonatomic) id<_MXExtensionLookupPolicy> lookupPolicy;

+ (id)_queue;
+ (id)restaurantReservationIntentClassNames;
+ (id)_lookupPolicyForUIExtension;
+ (id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifier:(id)a0;
+ (id)restaurantQueueingIntentClassNames;
+ (void)_maps_updateRideBookingExtensions:(id)a0;
+ (id)lookupPolicyForExtensionWithCapabilities:(id)a0;
+ (id)managerWithExtensionLookupPolicy:(id)a0 updateHandler:(id /* block */)a1;
+ (id)lookupPolicyForExtensionWithCapability:(id)a0;
+ (id)_lookupPolicyForExtensionWithContainingAppIdentifiers:(id)a0 supportsIntentClassNames:(id)a1;
+ (void)imageForKey:(id)a0 extension:(id)a1 completion:(id /* block */)a2;
+ (id)lookupPolicyForRestaurantReservationExtensions;
+ (id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifiers:(id)a0;
+ (id)_maps_ridesharingOptionalIntentClassesForNonUIHandling;
+ (id)_lookupPolicyForExtensionWithContainingAppIdentifier:(id)a0 supportsIntentClassNames:(id)a1;
+ (id)lookupPolicyForRestaurantQueueingExtensions;
+ (id)_extensionsWithLookupPolicy:(id)a0;
+ (id)_lookupPolicyForNonUIExtension;
+ (id)_lookupPolicyWithExtensionPointNames:(id)a0;
+ (id)_lookupPolicyForExtensionWithIdentifier:(id)a0;
+ (id)_maps_ridesharingRequiredIntentClassesForNonUIHandling;
+ (id)_maps_ridesharingIntentClassesForUIInteraction;
+ (id)_maps_ridesharingAllIntentClassesForNonUIHandling;
+ (id)lookupPolicyForRestaurantQueueingExtensionWithContainingAppIdentifier:(id)a0;
+ (id)_lookupPolicyWithBlock:(id /* block */)a0;
+ (id)_maps_lookupPolicyForRidesharingNonUIExtensions;
+ (id)managerWithLookupPolicy:(id)a0 delegate:(id)a1;
+ (id)_lookupPolicyForExtensionSupportsIntentClassNames:(id)a0;
+ (id)_lookupPolicyForAllExtensions;
+ (id)_maps_lookupPolicyForEnabledRidesharingNonUIExtensions;
+ (id)_lookupPolicyForIntentsExtensions;

- (id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)a0;
- (id)initWithLookupPolicy:(id)a0 delegate:(id)a1 extensionProvider:(id)a2;
- (void)dealloc;
- (id)initWithLookupPolicy:(id)a0 delegate:(id)a1;
- (void)invalidate;
- (void).cxx_destruct;

@end
