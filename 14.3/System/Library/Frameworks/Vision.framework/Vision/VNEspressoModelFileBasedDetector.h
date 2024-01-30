@class VNEspressoResources;

@interface VNEspressoModelFileBasedDetector : VNDetector

@property (readonly, nonatomic) VNEspressoResources *espressoResources;
@property (readonly, nonatomic) unsigned long long networkRequiredInputImageWidth;
@property (readonly, nonatomic) unsigned long long networkRequiredInputImageHeight;

+ (id)espressoModelFileNameForConfigurationOptions:(id)a0;
+ (id)espressoModelInputImageDimensionsBlobNameForConfigurationOptions:(id)a0;
+ (id)configurationOptionKeysForDetectorKey;
+ (id)keyForDetectorWithConfigurationOptions:(id)a0;

- (void).cxx_destruct;
- (BOOL)_loadEspressoModelWithConfigurationOptions:(id)a0 error:(id *)a1;
- (int)espressoModelNetworkLayersStorageTypeForConfigurationOptions:(id)a0;
- (BOOL)getWidth:(unsigned long long *)a0 height:(unsigned long long *)a1 ofEspressoModelNetworkBlobNamed:(id)a2 error:(id *)a3;
- (BOOL)completeInitializationForSession:(id)a0 error:(id *)a1;
- (BOOL)supportsProcessingDevice:(id)a0;

@end
