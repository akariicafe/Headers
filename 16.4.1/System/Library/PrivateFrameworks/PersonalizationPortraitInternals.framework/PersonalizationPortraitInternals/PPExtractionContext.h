@class NSDictionary;

@interface PPExtractionContext : NSObject {
    NSDictionary *_probabilities;
}

- (void).cxx_destruct;
- (id)initWithProbabilities:(id)a0;
- (double)probabilityForDomain:(unsigned int)a0;

@end
