@interface _INAggregator : NSObject

+ (void)logReceivedCount:(unsigned long long)a0 ofVocabularyStringType:(long long)a1;
+ (id)_distributionKeyForVocabularyStringType:(long long)a0;
+ (void)resetSynapseVocabularyUpdate;
+ (BOOL)_canReportDistributionOfVocabularyStringType:(long long)a0;
+ (unsigned long long)_singificantFigureForVocabularyStringType:(long long)a0;
+ (double)roundCount:(unsigned long long)a0 toSignificantFigure:(unsigned long long)a1;

@end
