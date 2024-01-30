@class NSString;

@interface AMDStorageBasedProvider : AMDFeatureProvider

@property (retain, nonatomic) NSString *domain;

- (id)initWithDomain:(id)a0;
- (void).cxx_destruct;
- (id)getFeatureWithName:(id)a0 withColumn:(id)a1 error:(id *)a2;
- (void)storeFeatureData:(id)a0 error:(id *)a1;

@end
