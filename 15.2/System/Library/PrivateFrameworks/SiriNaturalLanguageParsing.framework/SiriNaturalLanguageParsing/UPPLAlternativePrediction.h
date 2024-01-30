@class NSArray, NSNumber;

@interface UPPLAlternativePrediction : NSObject

@property (readonly, nonatomic) NSArray *chunkPredictions;
@property (readonly, nonatomic) NSNumber *nerScore;
@property (readonly, nonatomic) unsigned long long alternativeIndex;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithChunkPredictions:(id)a0 nerScore:(id)a1 alternativeIndex:(unsigned long long)a2;

@end
