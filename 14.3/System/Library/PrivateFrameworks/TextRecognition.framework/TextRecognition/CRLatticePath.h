@class NSArray;

@interface CRLatticePath : NSObject

@property (readonly, nonatomic) NSArray *edges;
@property (readonly) double lexiconScore;
@property (readonly) double cnnScore;
@property (readonly) double ngramScore;
@property (readonly) double geometryScore;
@property (readonly) double patternScore;
@property (readonly) double totalScore;

- (void).cxx_destruct;
- (id)initWithEdgeIndexes:(id)a0 lex:(double)a1 cnn:(double)a2 ngram:(double)a3 geom:(double)a4 pattern:(double)a5 total:(double)a6;

@end
