@interface SGQuickResponsesScoring : NSObject

+ (id)sortedWithUnweightedScores:(id)a0 config:(id)a1;
+ (id)modelScoresWithUnweightedScores:(id)a0 config:(id)a1;
+ (id)categoryScoresWithModelScores:(id)a0 config:(id)a1;

@end
