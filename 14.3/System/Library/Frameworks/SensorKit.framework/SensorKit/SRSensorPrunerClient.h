@class SRSensorPruner;

@interface SRSensorPrunerClient : NSObject <SRSensorKitServiceClientPruning>

@property (weak) SRSensorPruner *pruner;

+ (id)prunerClientWithPruner:(id)a0;

- (void).cxx_destruct;
- (void)resetDatastoreFiles:(id)a0;
- (id)initWithPruner:(id)a0;

@end
