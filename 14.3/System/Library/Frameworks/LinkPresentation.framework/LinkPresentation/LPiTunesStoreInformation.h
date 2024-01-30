@class NSString, SKCloudServiceController, NSMapTable;

@interface LPiTunesStoreInformation : NSObject {
    SKCloudServiceController *_cloudServiceController;
    NSMapTable *_changeHandlers;
    unsigned long long _capabilities;
    BOOL _hasUpdatedCapabilities;
    NSString *_storefrontIdentifier;
}

@property (readonly) unsigned long long capabilities;
@property (readonly, copy) NSString *storefrontIdentifier;

+ (id)shared;
+ (unsigned long long)_convertCapabilities:(unsigned long long)a0;
+ (id)_convertNewStorefrontIdentifier:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)_setCapabilities:(unsigned long long)a0;
- (void)registerForStoreAvailablityChangesWithToken:(id)a0 handler:(id /* block */)a1;
- (void)unregisterForStoreAvailablityChangesWithToken:(id)a0;
- (unsigned long long)userStateForMediaStorefrontIdentifier:(id)a0;
- (void)_setStorefrontIdentifier:(id)a0;
- (void)_storefrontDidChangeNotification;
- (void)_capabilitiesDidChangeNotification;
- (void)_notifyChangeHandlers;

@end
