@class NSString;

@interface TITraceLogCandidateWordSource : NSObject

@property (retain, nonatomic) NSString *wordSource;
@property (nonatomic) double probability;
@property (nonatomic) double linguisticContextProbability;

- (void).cxx_destruct;
- (id)initWithWordSource:(id)a0 probability:(double)a1 linguisticContextProbability:(double)a2;

@end
