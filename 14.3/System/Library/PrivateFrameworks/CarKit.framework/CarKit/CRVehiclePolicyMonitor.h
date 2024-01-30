@class NSData, NSXPCConnection;
@protocol CRVehiclePolicyMonitoring;

@interface CRVehiclePolicyMonitor : NSObject <CRCarKitMonitoringClientService>

@property (retain, nonatomic) NSData *vehicleCertificateSerial;
@property (retain, nonatomic) NSXPCConnection *serviceConnection;
@property (nonatomic, getter=isMonitoring) BOOL monitoring;
@property (weak, nonatomic) id<CRVehiclePolicyMonitoring> delegate;

- (void)startMonitoring;
- (void).cxx_destruct;
- (void)dealloc;
- (void)stopMonitoring;
- (id)monitoringConnection;
- (void)willEnableCertificateSerial:(id)a0 reply:(id /* block */)a1;
- (void)willDisableCertificateSerial:(id)a0 reply:(id /* block */)a1;
- (id)initWithVehicleCertificateSerial:(id)a0;

@end
