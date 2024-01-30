@class NSMutableDictionary;

@interface ICQAppsSyncingToDriveCache : NSObject {
    NSMutableDictionary *_hashMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _cacheLock;
}

+ (id)sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (id)appsSyncingToDriveforAltDSID:(id)a0;
- (void)setAppsSyncingToDrive:(id)a0 forAltDSID:(id)a1;

@end
