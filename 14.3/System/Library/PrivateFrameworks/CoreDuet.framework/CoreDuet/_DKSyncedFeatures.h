@interface _DKSyncedFeatures : NSObject {
    BOOL _isDigitalHealthDisabledInitialized;
    BOOL _isDigitalHealthDisabledPreviousResult;
    BOOL _isSingleDevice;
    long long _screenTimeSyncState;
}

- (id)init;
- (id)description;

@end
