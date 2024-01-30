@class AMDCoreDataPersistentContainer;

@interface AMDOnDeviceTester : NSObject

@property (retain, nonatomic) AMDCoreDataPersistentContainer *container;

+ (id)fetchTasteProfile:(id *)a0;
+ (void)saveEvent:(id)a0 error:(id *)a1;
+ (id)fetchEvents:(id *)a0;
+ (id)deleteEvents:(id *)a0;
+ (id)getAppSegments:(id *)a0;
+ (id)fetchModelUrls:(id *)a0;
+ (id)getEnvironments;
+ (BOOL)initEnv:(id)a0 withDomain:(id)a1 userId:(id)a2 andStoreFrontId:(id)a3;
+ (void)initPersistentContainer;
+ (void)refreshOnDeviceTasteProfile:(id)a0 withUserId:(id)a1 andStoreFrontId:(unsigned int)a2 error:(id *)a3;
+ (void)saveDescriptors:(id)a0 forDomain:(long long)a1 error:(id *)a2;

- (id)init;
- (void).cxx_destruct;
- (void)testSaveConfigAndDownloadModel:(id *)a0;
- (void)testOnDeviceTasteProfile:(id)a0 error:(id *)a1;
- (void)testAddEvent:(id *)a0;
- (void)testAggregation:(id *)a0;
- (void)testClient:(id *)a0;
- (void)testFeatureDescriptor:(id *)a0;
- (void)testRunInference:(id *)a0;

@end
