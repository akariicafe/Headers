@class NSMutableDictionary, _TVRCExpiringStore, RPCompanionLinkClient;
@protocol _TVRCRapportDeviceQueryDelegate;

@interface _TVRCRapportDeviceQuery : NSObject {
    _TVRCExpiringStore *_expiringStore;
    RPCompanionLinkClient *_companionLinkClient;
    NSMutableDictionary *_wrapperToIdentifierMapping;
    NSMutableDictionary *_deviceRecords;
    BOOL _unpairedBLEDevicesReported;
}

@property (weak, nonatomic) id<_TVRCRapportDeviceQueryDelegate> delegate;

- (void).cxx_destruct;
- (void)dealloc;
- (void)stop;
- (void)start;
- (void)_disconnectAllDevices;
- (BOOL)_shouldReportDevice:(id)a0;
- (void)_deviceFound:(id)a0 unpairedBLE:(BOOL)a1;
- (void)_deviceLost:(id)a0;
- (BOOL)_recordExistsForIDS:(id)a0;
- (void)_updateRecordForIDS:(id)a0 addTransportForFlag:(unsigned long long)a1;
- (void)_updateRecordForIDS:(id)a0 removeTransportForFlag:(unsigned long long)a1;
- (unsigned long long)_transportForStatusFlag:(unsigned long long)a0;

@end
