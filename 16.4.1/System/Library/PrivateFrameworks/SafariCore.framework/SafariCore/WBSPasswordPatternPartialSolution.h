@class WBSPasswordPatternMatch;

@interface WBSPasswordPatternPartialSolution : NSObject

@property (readonly, nonatomic) WBSPasswordPatternMatch *patternMatch;
@property (readonly, nonatomic) double guessesRequiredWithoutPatternCountPenalty;
@property (readonly, nonatomic) double guessesRequiredWithPatternCountPenalty;

- (void).cxx_destruct;
- (id)initWithPatternMatch:(id)a0 guessesRequiredWithoutPatternCountPenalty:(double)a1 withPatternCountPenalty:(double)a2;

@end
