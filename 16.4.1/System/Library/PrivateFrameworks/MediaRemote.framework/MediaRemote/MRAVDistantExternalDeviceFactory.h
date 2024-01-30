@class NSArray, NSMutableDictionary;

@interface MRAVDistantExternalDeviceFactory : NSObject {
    NSMutableDictionary *_distantExternalDevices;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSArray *externalDevices;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)_withLock_createDistantExternalDeviceForEndpoint:(id)a0;
- (void)_withLock_purgeCache;
- (id)distantExternaDeviceForEndpoint:(id)a0;

@end
