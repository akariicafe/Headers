@class CHRecognizer, NSArray, TIInputManagerHandwriting, NSString, NSDictionary;

@interface RecognizePredictionOperation : NSOperation

@property (readonly, nonatomic) TIInputManagerHandwriting *inputManager;
@property (readonly, nonatomic) CHRecognizer *recognizer;
@property (readonly, copy, nonatomic) NSArray *committedCandidates;
@property (readonly, nonatomic) unsigned long long predictionOptions;
@property (readonly, nonatomic) NSString *prefixContext;
@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSArray *proactiveTriggers;
@property (readonly, nonatomic) NSDictionary *candidateRefsDictionary;

- (void).cxx_destruct;
- (void)main;
- (id)initWithInputManager:(id)a0 predictionOptions:(unsigned long long)a1 prefixContext:(id)a2;

@end
