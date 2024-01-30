@class SRSensorPruner;

@interface SRSensorPrunerClient : NSObject <SRSensorKitServiceClientPruning>

@property (weak) SRSensorPruner *pruner;

+ (id)prunerClientWithPruner:(id)a0;

- (void)resetDatastoreFiles:(id)a0;
- (void).cxx_destruct;
- (id)initWithPruner:(id)a0;

@end
