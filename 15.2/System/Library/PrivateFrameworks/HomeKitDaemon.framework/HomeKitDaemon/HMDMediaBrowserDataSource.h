@class NSString, HMFSystemInfo;

@interface HMDMediaBrowserDataSource : HMFObject <HMDMediaBrowserDataSource>

@property (readonly) NSString *currentAccessoryMediaRouteIdentifier;
@property (readonly) BOOL isAppleMediaAccessory;
@property (readonly) BOOL requiresHomePodPairing;
@property (readonly) HMFSystemInfo *systemInfo;

+ (id)shortDescription;

- (id)createUnassociatedAppleMediaAccessory:(id)a0 name:(id)a1 category:(id)a2 messageDispatcher:(id)a3;
- (id)createUnassociatedHomePodAccessory:(id)a0 name:(id)a1 category:(id)a2 messageDispatcher:(id)a3;

@end
