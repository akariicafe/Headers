@class NSArray;

@interface RTWiFiManager : RTService

@property (nonatomic) unsigned long long powerStatus;
@property (readonly, nonatomic) unsigned long long linkStatus;
@property (retain, nonatomic) NSArray *accessPoints;

+ (BOOL)supportsNotificationName:(id)a0;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)powerStatusToString:(unsigned long long)a0;
+ (id)linkStatusToString:(unsigned long long)a0;

- (void)internalRemoveObserver:(id)a0 name:(id)a1;
- (void)internalAddObserver:(id)a0 name:(id)a1;
- (void)_cancelScan;
- (void).cxx_destruct;
- (id)init;
- (void)_scheduleScan;
- (void)scheduleScan;
- (void)cancelScan;
- (void)fetchPowerStatus:(id /* block */)a0;
- (void)fetchLinkStatus:(id /* block */)a0;
- (void)_notifyScanResults:(id)a0;

@end
