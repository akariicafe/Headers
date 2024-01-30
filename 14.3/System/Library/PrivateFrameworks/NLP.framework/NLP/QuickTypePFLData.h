@interface QuickTypePFLData : NSObject

@property (readonly, nonatomic) unsigned long long maxSequenceLength;
@property (readonly, nonatomic) unsigned long long numTrainingSamples;
@property (readonly, nonatomic) unsigned long long numTrainingTokens;

- (void)shuffle;
- (id)initWithMaxSequenceLength:(unsigned long long)a0;
- (void)enumerateDataInBatches:(unsigned long long)a0 usingBlock:(id /* block */)a1;
- (BOOL)loadFromFile:(id)a0 error:(id *)a1;

@end
