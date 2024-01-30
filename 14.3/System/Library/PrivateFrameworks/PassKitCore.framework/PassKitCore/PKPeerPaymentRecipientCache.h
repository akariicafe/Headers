@class NSTimer, PKMapContainer;

@interface PKPeerPaymentRecipientCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mapAccessLock;
    PKMapContainer *_mapContainer;
    NSTimer *_mapNeedsWriteTimer;
}

+ (id)_instanceName;
+ (id)sharedCache;

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;
- (id)recipientForRecipientAddress:(id)a0;
- (void)cacheRecipient:(id)a0 forRecipientAddress:(id)a1;
- (void)purgeRecipientWithRecipientAddress:(id)a0;
- (void)_updateMapsFromDisk;
- (void)_handlePurgedNotification:(id)a0;
- (BOOL)purgeCache;
- (void)_handleDiskMapChangedNotification:(id)a0;
- (id)_keyForRecipientAddress:(id)a0;
- (void)_locked_setMapNeedsWrite;
- (BOOL)_writeMapToDisk;
- (BOOL)_canReadMap;
- (BOOL)_canWriteMap;
- (id)__init;
- (void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)a0;
- (BOOL)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)a0;

@end
