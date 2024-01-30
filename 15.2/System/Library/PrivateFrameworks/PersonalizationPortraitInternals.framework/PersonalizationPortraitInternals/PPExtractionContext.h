@class NSDictionary;

@interface PPExtractionContext : NSObject {
    NSDictionary *_probabilities;
}

- (id)initWithProbabilities:(id)a0;
- (double)probabilityForDomain:(unsigned int)a0;
- (void).cxx_destruct;

@end
