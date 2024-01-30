@class AMDCoreDataPersistentContainer;

@interface AMDOnDeviceTester : NSObject

@property (retain, nonatomic) AMDCoreDataPersistentContainer *container;

- (void).cxx_destruct;
- (id)init;
- (void)testAddEvent:(id *)a0;
- (void)testFeatureDescriptor:(id *)a0;
- (void)testAggregation:(id *)a0;
- (void)testOnDeviceTasteProfile:(id)a0 error:(id *)a1;
- (void)testClient:(id *)a0;
- (void)testDESRecordWriter:(id *)a0;
- (void)testSaveConfigAndDownloadModel:(id *)a0;
- (void)testRunInference:(id *)a0;

@end
