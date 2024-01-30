@class NSString, HMFSystemInfo, HMFProductInfo, HMDDevice;

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>

@property (readonly) NSString *currentAccessoryMediaRouteIdentifier;
@property (readonly) BOOL isAppleMediaAccessory;
@property (readonly) BOOL requiresHomePodMiniPairing;
@property (readonly) unsigned long long supportedStereoPairVersions;
@property (readonly) BOOL requiresB620Pairing;
@property (readonly) HMFSystemInfo *systemInfo;
@property (readonly) HMFProductInfo *productInfo;
@property (readonly) HMDDevice *currentDevice;
@property (readonly) unsigned long long appleMediaAccessoryVariant;

+ (id)shortDescription;

- (id)performOperation:(id)a0;
- (id)createUnassociatedAppleMediaAccessory:(id)a0 name:(id)a1 category:(id)a2 productColor:(long long)a3 idsIdentifierString:(id)a4 rawAccessoryCapabilities:(id)a5 rawResidentCapabilities:(id)a6 messageDispatcher:(id)a7;
- (id)createUnassociatedHomePodAccessory:(id)a0 name:(id)a1 category:(id)a2 productColor:(long long)a3 idsIdentifierString:(id)a4 requiredPairingCapabilities:(unsigned long long)a5 minimumPairingSoftware:(id)a6 rawAccessoryCapabilities:(id)a7 rawResidentCapabilities:(id)a8 messageDispatcher:(id)a9;

@end
