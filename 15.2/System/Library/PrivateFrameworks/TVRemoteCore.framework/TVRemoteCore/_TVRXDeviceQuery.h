@class NSString, NSMutableDictionary, _TVRCRapportDeviceQuery, _TVRCRMSDeviceQuery, _TVRCMediaRemoteDeviceQuery, _TVRCMatchPointDeviceQuery, NSSet;
@protocol _TVRXDeviceQueryDelegate;

@interface _TVRXDeviceQuery : NSObject <_TVRCMediaRemoteDeviceQueryDelegate, _TVRCRapportDeviceQueryDelegate, _TVRCMatchPointDeviceQueryDelegate, _TVRCRMSDeviceQueryDelegate>

@property (nonatomic) BOOL isRunning;
@property (retain, nonatomic) NSMutableDictionary *aggregateDevices;
@property (retain, nonatomic) _TVRCMediaRemoteDeviceQuery *mediaRemoteQuery;
@property (retain, nonatomic) _TVRCRapportDeviceQuery *rapportDeviceQuery;
@property (retain, nonatomic) _TVRCRMSDeviceQuery *rmsDeviceQuery;
@property (retain, nonatomic) _TVRCMatchPointDeviceQuery *matchPointQuery;
@property (weak, nonatomic) id<_TVRXDeviceQueryDelegate> delegate;
@property (readonly, copy, nonatomic) NSSet *devices;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)start;
- (void).cxx_destruct;
- (id)init;
- (void)stop;
- (void)_startSearch;
- (void)_notifyDelegateDidUpdateDevices;
- (void)_stopSearch;
- (id)_findAggregateForIdentifier:(id)a0 createIfNeeded:(BOOL)a1;
- (void)_reevaluateAggregates;
- (void)mediaRemoteDeviceQuery:(id)a0 addedTelevision:(id)a1;
- (void)mediaRemoteDeviceQuery:(id)a0 removedTelevision:(id)a1;
- (void)rapportDeviceQuery:(id)a0 addedDevice:(id)a1;
- (void)rapportDeviceQuery:(id)a0 removedDevice:(id)a1;
- (void)matchpointDeviceQuery:(id)a0 addedService:(id)a1;
- (void)matchpointDeviceQuery:(id)a0 removedService:(id)a1;
- (void)rmsDeviceQuery:(id)a0 addedDevice:(id)a1;
- (void)rmsDeviceQuery:(id)a0 removedDevice:(id)a1;

@end
