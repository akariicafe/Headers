@class SRSensorReader;

@interface SRSensorReaderClient : NSObject <SRSensorKitServiceClientReading>

@property (weak) SRSensorReader *reader;

+ (id)readerClientWithReader:(id)a0;

- (void).cxx_destruct;
- (void)resetDatastoreFiles:(id)a0;
- (id)initWithReader:(id)a0;

@end
