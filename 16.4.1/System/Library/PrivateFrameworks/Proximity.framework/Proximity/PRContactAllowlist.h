@class PRBeaconListener, NSString, NSMutableArray, NSObject;
@protocol OS_os_log;

@interface PRContactAllowlist : NSObject <PRBeaconListenerDelegate> {
    NSObject<OS_os_log> *_logger;
    NSMutableArray *_allowlist;
    PRBeaconListener *_nearbyDaemonSession;
    BOOL _needToRestart;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)clear:(id /* block */)a0;
- (void).cxx_destruct;
- (void)addTrustedContact:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)removeTrustedContact:(id)a0 withCompletionHandler:(id /* block */)a1;
- (void)beaconListener:(id)a0 didChangeState:(unsigned long long)a1;
- (void)beaconListener:(id)a0 didFailWithError:(id)a1;

@end
