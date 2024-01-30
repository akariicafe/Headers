@class NSNumber, NSString;

@interface QuickTypePFLTrainer : NSObject

@property (nonatomic) unsigned long long batchSize;
@property (copy, nonatomic) NSNumber *learningRate;
@property (readonly, nonatomic) unsigned long long maxSequenceLength;
@property (readonly, copy, nonatomic) NSString *updatedModelPath;

- (void)reset;
- (id)initWithSeedModelPath:(id)a0;
- (void)trainOn:(id)a0 forNEpochs:(unsigned long long)a1;
- (void)trainAndKeepInMemory:(id)a0 forNEpochs:(unsigned long long)a1;
- (void)trainOn:(id)a0 forNEpochs:(unsigned long long)a1 andKeepInMemory:(BOOL)a2;
- (id)evaluateOn:(id)a0;
- (float *)copyWeightUpdates:(unsigned long long *)a0;

@end
