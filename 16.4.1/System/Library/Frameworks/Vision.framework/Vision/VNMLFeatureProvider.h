@class NSSet, NSString, VNSceneprint;
@protocol MLFeatureProvider;

@interface VNMLFeatureProvider : NSObject <MLFeatureProvider> {
    NSString *_imageInputKey;
    struct __CVBuffer { } *_buffer;
    VNSceneprint *_scenePrint;
    long long _scenePrintMLMultiArrayDataType;
    id<MLFeatureProvider> _featureProvider;
}

@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (id)featureValueFromScenePrint:(id)a0 dataType:(long long)a1;
- (id)initWithBuffer:(struct __CVBuffer { } *)a0 forKey:(id)a1 originalFeatureProvider:(id)a2;
- (id)initWithScenePrint:(id)a0 dataType:(long long)a1 forKey:(id)a2 originalFeatureProvider:(id)a3;

@end
