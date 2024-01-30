@interface _DKSyncedFeatures : NSObject {
    BOOL _isDigitalHealthDisabledInitialized;
    BOOL _isDigitalHealthDisabledPreviousResult;
    BOOL _isSingleDevice;
    long long _screenTimeSyncState;
}

- (id)description;
- (id)init;

@end
