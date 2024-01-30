@class SRSensorReader;

@interface SRSensorReaderClient : NSObject <SRSensorKitServiceClientReading>

@property (weak) SRSensorReader *reader;

+ (id)readerClientWithReader:(id)a0;

- (void)resetDatastoreFiles:(id)a0;
- (void).cxx_destruct;
- (id)initWithReader:(id)a0;

@end
