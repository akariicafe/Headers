@class NSHashTable, NSXPCConnection;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy> {
    NSXPCConnection *_connection;
    NSHashTable *_observers;
}

+ (id)sharedInstance;

- (void)simulateUGCPhotoSubmissionResolution;
- (void)clearVenueBulletin;
- (void)fetchCurrentAnnouncement:(id /* block */)a0;
- (void)clearCurrentAnnouncement;
- (void)clearBulletinWithRecordID:(id)a0;
- (void)_connectToDaemonIfNeeded;
- (void)clearTrafficIncidentBulletinWithAlertID:(id)a0;
- (id)_remoteObjectProxy;
- (void)closeConnection;
- (void)addObserver:(id)a0;
- (void)showMapsSuggestionsBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)clearPredictedRouteTrafficIncidentBulletin;
- (void)fetchDevicePushToken:(id /* block */)a0;
- (void)showParkedCarBulletinForEvent:(id)a0;
- (void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)a0;
- (void)simulateRAPStatusChangeNotification;
- (void)handleMapsApplicationRemoval:(id /* block */)a0;
- (void)showParkedCarReplacementBulletinForEvent:(id)a0 replacingEvent:(id)a1;
- (void)pushDaemonProxyReceivedNotificationData:(id)a0 forType:(id)a1 recordIdentifier:(id)a2;
- (void)_clearConnection;
- (void)removeObserver:(id)a0;
- (void)showLowFuelAlertBulletinForLowFuelDetails:(id)a0;
- (void)clearMapsSuggestionsBulletin;
- (void)showVenueBulletinWithTitle:(id)a0 message:(id)a1 actionURL:(id)a2;
- (void)simulateProblemResolution;
- (void)clearLowFuelAlertBulletin;
- (id)init;
- (void)showTrafficIncidentAlertWithID:(id)a0 withReroute:(BOOL)a1 title:(id)a2 description:(id)a3;
- (void)resetAnnouncements;
- (void)simulateUGCPhotoAttributionClearedNotification;
- (void)clearParkedCarBulletin;
- (id)_connection;
- (void).cxx_destruct;

@end
