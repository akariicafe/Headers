@class NSTimer, PKMapContainer;

@interface PKPeerPaymentRecipientCache : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _mapAccessLock;
    PKMapContainer *_mapContainer;
    NSTimer *_mapNeedsWriteTimer;
}

+ (id)_instanceName;
+ (id)sharedCache;

- (void)noteSubmittedLowFrequencyDeviceScoreForRecipientAddress:(id)a0;
- (BOOL)lowFrequencyDeviceScoreSubmissionRequiredForRecipientAddress:(id)a0;
- (BOOL)_canReadMap;
- (id)recipientForRecipientAddress:(id)a0;
- (void)cacheRecipient:(id)a0 forRecipientAddress:(id)a1;
- (void)purgeRecipientWithRecipientAddress:(id)a0;
- (BOOL)_writeMapToDisk;
- (BOOL)purgeCache;
- (void).cxx_destruct;
- (id)__init;
- (id)init;
- (void)_updateMapsFromDisk;
- (BOOL)_canWriteMap;
- (void)_handlePurgedNotification:(id)a0;
- (void)_handleDiskMapChangedNotification:(id)a0;
- (id)_keyForRecipientAddress:(id)a0;
- (void)_locked_setMapNeedsWrite;
- (void)dealloc;

@end
