@class _MXExtensionProvider;
@protocol _MXExtensionManagerDelegate, _MXExtensionLookupPolicy;

@interface _MXExtensionManager : NSObject

@property (retain, nonatomic) id matchingContext;
@property (weak, nonatomic) id<_MXExtensionManagerDelegate> delegate;
@property (retain, nonatomic) _MXExtensionProvider *extensionProvider;
@property (readonly, nonatomic) id<_MXExtensionLookupPolicy> lookupPolicy;

+ (void)_maps_updateRideBookingExtensions:(id)a0;
+ (id)lookupPolicyForRestaurantQueueingExtensionWithContainingAppIdentifier:(id)a0;
+ (id)_lookupPolicyForExtensionWithIdentifier:(id)a0;
+ (id)_queue;
+ (id)lookupPolicyForRestaurantReservationExtensions;
+ (id)_extensionsWithLookupPolicy:(id)a0;
+ (id)_lookupPolicyForExtensionWithContainingAppIdentifier:(id)a0 supportsIntentClassNames:(id)a1;
+ (id)_maps_lookupPolicyForRidesharingNonUIExtensions;
+ (id)_lookupPolicyWithExtensionPointNames:(id)a0;
+ (id)managerWithExtensionLookupPolicy:(id)a0 updateHandler:(id /* block */)a1;
+ (id)_lookupPolicyForExtensionSupportsIntentClassNames:(id)a0;
+ (id)_lookupPolicyForAllExtensions;
+ (id)_maps_ridesharingIntentClassesForUIInteraction;
+ (id)_maps_lookupPolicyForEnabledRidesharingNonUIExtensions;
+ (id)lookupPolicyForExtensionWithCapabilities:(id)a0;
+ (id)_maps_ridesharingOptionalIntentClassesForNonUIHandling;
+ (id)_maps_ridesharingAllIntentClassesForNonUIHandling;
+ (id)_lookupPolicyForNonUIExtension;
+ (void)imageForKey:(id)a0 extension:(id)a1 completion:(id /* block */)a2;
+ (id)_lookupPolicyForUIExtension;
+ (id)restaurantQueueingIntentClassNames;
+ (id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifier:(id)a0;
+ (id)restaurantReservationIntentClassNames;
+ (id)lookupPolicyForExtensionWithCapability:(id)a0;
+ (id)lookupPolicyForRestaurantQueueingExtensions;
+ (id)_maps_ridesharingRequiredIntentClassesForNonUIHandling;
+ (id)managerWithLookupPolicy:(id)a0 delegate:(id)a1;
+ (id)_lookupPolicyForIntentsExtensions;
+ (id)_lookupPolicyWithBlock:(id /* block */)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithLookupPolicy:(id)a0 delegate:(id)a1;
- (id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)a0;
- (id)initWithLookupPolicy:(id)a0 delegate:(id)a1 extensionProvider:(id)a2;
- (void)invalidate;

@end
