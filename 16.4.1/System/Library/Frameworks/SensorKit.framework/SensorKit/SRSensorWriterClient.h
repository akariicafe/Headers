@class SRSensorWriter;

@interface SRSensorWriterClient : NSObject <SRSensorKitServiceClientWriting>

@property (weak) SRSensorWriter *writer;

+ (id)sensorWriterClientWithWriter:(id)a0;

- (void)setMonitoring:(BOOL)a0 withRequestedConfigurations:(id)a1;
- (id)initWithWriter:(id)a0;
- (void)resetDatastoreFiles:(id)a0;
- (void).cxx_destruct;

@end
