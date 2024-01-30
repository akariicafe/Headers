@class BMStoreConfig;

@interface FSFBiomeFeatureStore : NSObject <FSFFeatureStore>

@property (retain) BMStoreConfig *config;

+ (id)singletonInstance;

- (void).cxx_destruct;
- (id)init;
- (id)getStream:(id)a0;

@end
