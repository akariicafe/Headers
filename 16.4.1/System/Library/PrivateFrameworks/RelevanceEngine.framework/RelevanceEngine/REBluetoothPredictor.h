@class NSDictionary, REUpNextScheduler, REDuetContextQuery;

@interface REBluetoothPredictor : REPredictor <REBluetoothPredictorProperties> {
    REDuetContextQuery *_connectCarQuery;
    REDuetContextQuery *_connectAudioQuery;
    REUpNextScheduler *_bluetoothNotificationScheduler;
}

@property (getter=_isConnctedToCar, setter=_setConnectedToCar:) BOOL _connectedToCar;
@property (getter=_isConnectedToSpeaker, setter=_setConnectedToSpeaker:) BOOL _connectedToSpeaker;
@property (retain) NSDictionary *localDevices;
@property (readonly) BOOL connectedToCar;
@property (readonly) BOOL connectedToSpeaker;

+ (id)supportedFeatures;
+ (id)bluetoothQueue;

- (void)pause;
- (id)_init;
- (void)update;
- (void).cxx_destruct;
- (void)resume;
- (void)_registerForBluetoothNotifications;
- (void)_unregisterForBluetoothNotifications;
- (id)featureValueForFeature:(id)a0 element:(id)a1 engine:(id)a2 trainingContext:(id)a3;

@end
