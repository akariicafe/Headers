@interface GEOPrivacyManager : NSObject {
    BOOL _lastKnownLocationServicesEnabled;
    BOOL _hasLastKnownLocationServicesEnabled;
}

- (id)init;
- (void)dealloc;
- (void)_fireResetLocationAndPrivacyNotification;
- (void)_fireRecentsClearedNotification;
- (void)_locationServicesStateChanged;

@end
