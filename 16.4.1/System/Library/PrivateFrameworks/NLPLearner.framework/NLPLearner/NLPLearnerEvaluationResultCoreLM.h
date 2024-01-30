@interface NLPLearnerEvaluationResultCoreLM : NSObject

@property (nonatomic) float logfProbability;
@property (nonatomic) float predictedWords;
@property (nonatomic) unsigned long long wordCount;
@property (nonatomic) unsigned long long tokenCount;
@property (nonatomic) unsigned long long sentenceCount;

@end
