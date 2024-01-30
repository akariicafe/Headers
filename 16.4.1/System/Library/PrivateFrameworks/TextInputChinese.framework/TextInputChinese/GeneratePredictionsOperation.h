@class NSArray, TIInputManagerHandwriting, NSString, NSDictionary, TIWordSearchHandwriting;

@interface GeneratePredictionsOperation : NSOperation

@property (readonly, nonatomic) TIInputManagerHandwriting *inputManager;
@property (readonly, nonatomic) TIWordSearchHandwriting *wordSearch;
@property (readonly, copy, nonatomic) NSArray *committedCandidates;
@property (readonly, nonatomic) unsigned long long predictionOptions;
@property (readonly, nonatomic) NSString *prefixContext;
@property (readonly, nonatomic) NSArray *candidates;
@property (readonly, nonatomic) NSArray *proactiveTriggers;
@property (readonly, nonatomic) NSDictionary *candidateRefsDictionary;

- (void)main;
- (void).cxx_destruct;
- (id)initWithInputManager:(id)a0 predictionOptions:(unsigned long long)a1 prefixContext:(id)a2;

@end
