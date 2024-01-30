@class NSString, NSNumber, NSURL;

@interface QuickTypePFLTrainerMLP : NSObject {
    NSURL *_seedModelPath;
    struct CFScopedPtr<void *> { void *m_ref; } _model;
}

@property (readonly, nonatomic) NSString *privacyIdentifier;
@property (nonatomic) unsigned long long batchSize;
@property (retain, nonatomic) NSNumber *learningRate;
@property (retain, nonatomic) NSNumber *gradientClipMin;
@property (retain, nonatomic) NSNumber *gradientClipMax;
@property (retain, nonatomic) NSNumber *clippingNorm;
@property (nonatomic) unsigned long long normBinCount;
@property (readonly, nonatomic) NSNumber *initialLoss;
@property (readonly, nonatomic) NSNumber *trainingLoss;

+ (void)initialize;
+ (struct __CFData { } *)copyToFlatBuffer:(void *)a0;
+ (id)reportingStringForModelUpdates:(float *)a0 count:(unsigned long long)a1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)getWeightUpdatesAddNoise:(BOOL)a0 encryptionKey:(id)a1 recipe:(id)a2;
- (id)initWithSeedModelPath:(id)a0 andPrivacyIdentifier:(id)a1;
- (BOOL)trainOn:(id)a0 forNEpochs:(unsigned long long)a1;
- (void)writeModelToURL:(id)a0;

@end
