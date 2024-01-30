@class NSString, NSMutableDictionary, NSMutableSet, CUCoalescer, NSObject, CUSystemMonitor;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface APBonjourCacheManager : NSObject {
    BOOL _cacheChanged;
    NSMutableDictionary *_cachedItems;
    NSMutableSet *_removedItems;
    NSMutableDictionary *_deviceMap;
    int _pairedPeersChangedToken;
    BOOL _pairedPeersGetting;
    NSMutableDictionary *_pairedPeersMap;
    NSObject<OS_dispatch_source> *_retryTimer;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    NSString *_networkSignature;
    double _networkSignatureWasValidAt;
    CUCoalescer *_writeCoaleser;
    CUSystemMonitor *_systemMonitor;
    struct LogCategory { int x0; int x1; char *x2; unsigned int x3; char *x4; char *x5; int x6; struct LogCategory *x7; struct LogOutput *x8; struct LogOutput *x9; unsigned long long x10; unsigned long long x11; unsigned int x12; unsigned int x13; char *x14; struct LogCategoryPrivate *x15; } *_ucat;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (copy, nonatomic) id /* block */ invalidationHandler;
@property (copy, nonatomic) NSString *label;
@property (copy, nonatomic) id /* block */ reportDeviceFoundHandler;
@property (copy, nonatomic) id /* block */ reportDeviceLostHandler;
@property (copy, nonatomic) NSString *serviceType;

- (void)_sanitizeDNSStrings:(id)a0;
- (id)init;
- (void)_refreshOrRemoveCachedItem:(id)a0;
- (void).cxx_destruct;
- (void)_reportCachedItemsLost:(long long)a0;
- (BOOL)_writeCachedItems:(id)a0;
- (void)activateWithCompletion:(id /* block */)a0;
- (void)_addDeviceToCache:(id)a0 pairedPeerInfo:(id)a1 event:(long long)a2;
- (void)_recheckDevices:(long long)a0;
- (void)_networkSignatureChanged;
- (void)dealloc;
- (void)forceReportCachedDevices;
- (void)_refreshCachedItems;
- (void)_activateWithCompletion:(id /* block */)a0;
- (void)_cancelRetryGetPairedPeers;
- (void)_flushCachedItems;
- (void)deviceFound:(id)a0;
- (void)_invalidated;
- (void)_pairedPeersChanged;
- (void)_reportCachedItemLost:(id)a0 event:(long long)a1;
- (void)_invalidate;
- (void)_updateLastSeenTimestamp:(id)a0;
- (id)_readCachedItems;
- (void)_startRetryGetPairedPeersTimer;
- (void)_updateCachedDeviceInfoWhenRealDeviceIsFound:(id)a0 event:(long long)a1;
- (void)_replaceIfnameFromDNSString:(id)a0;
- (void)_reportCachedItemsFound:(long long)a0;
- (void)_removeDuplicateCachedItemsIfFound:(unsigned long long)a0 identifier:(id)a1 serialNumber:(id)a2 manufacturer:(id)a3;
- (void)cacheHKPeerIfNeeded:(id)a0 pairedPeerInfo:(id)a1;
- (BOOL)deviceLost:(id)a0;
- (void)_deviceFound:(id)a0 altPairedInfo:(id)a1 recheck:(BOOL)a2 event:(long long)a3;
- (void)invalidate;

@end
