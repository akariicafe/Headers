@class NSData, NSXPCConnection;
@protocol CRVehiclePolicyMonitoring;

@interface CRVehiclePolicyMonitor : NSObject <CRCarKitMonitoringClientService>

@property (retain, nonatomic) NSData *vehicleCertificateSerial;
@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (weak, nonatomic) id<CRVehiclePolicyMonitoring> delegate;

- (void)startMonitoring;
- (void)dealloc;
- (void).cxx_destruct;
- (void)stopMonitoring;
- (id)initWithVehicleCertificateSerial:(id)a0;
- (id)monitoringConnection;
- (void)willDisableCertificateSerial:(id)a0 reply:(id /* block */)a1;
- (void)willEnableCertificateSerial:(id)a0 reply:(id /* block */)a1;

@end
