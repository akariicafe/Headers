@class NSString, NSArray;

@interface DNDSClientDetails : NSObject <NSCopying>

@property (readonly, copy, nonatomic) NSString *clientIdentifier;
@property (readonly, copy, nonatomic) NSArray *identifiers;
@property (readonly, nonatomic, getter=isResolutionContextAssumingDeviceUILocked) BOOL resolutionContextAssumingDeviceUILocked;
@property (readonly, nonatomic, getter=isUserInteractionClient) BOOL userInteractionClient;
@property (readonly, nonatomic, getter=isPersistentAssertionClient) BOOL persistentAssertionClient;
@property (readonly, nonatomic, getter=isSyncSuppressedClient) BOOL syncSuppressedClient;
@property (readonly, nonatomic, getter=isIOS14SyncSuppressedClient) BOOL iOS14SyncSuppressedClient;

+ (id)detailsForBundleAtURL:(id)a0;
+ (id)detailsForClientIdentifier:(id)a0 applicationBundleURL:(id)a1;
+ (id)_detailsForClientIdentifier:(id)a0 bundleInfoDictionary:(id)a1;

- (id)initWithClientIdentifier:(id)a0 identifiers:(id)a1 resolutionContextAssumingDeviceUILocked:(BOOL)a2 userInteractionClient:(BOOL)a3 persistentAssertionClient:(BOOL)a4 syncSuppressedClient:(BOOL)a5 iOS14SyncSuppressedClient:(BOOL)a6;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
