@class NSString;

@interface REBluetoothDeviceRelevanceProviderManager : RERelevanceProviderManager <REPredictorObserver, REBluetoothDeviceRelevanceProviderManagerProperties> {
    BOOL _connectedToCar;
    BOOL _connectedToSpeaker;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL connectedToCar;
@property (readonly, nonatomic) BOOL connectedToSpeaker;

+ (Class)_relevanceProviderClass;
+ (BOOL)_wantsSeperateRelevanceQueue;
+ (id)_features;

- (id)initWithQueue:(id)a0;
- (void)predictorDidUpdate:(id)a0;
- (id)_valueForProvider:(id)a0 feature:(id)a1;
- (void)pause;
- (void)resume;
- (void)_prepareForUpdate;

@end
