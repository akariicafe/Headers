@interface _INAggregator : NSObject

+ (id)_distributionKeyForVocabularyStringType:(long long)a0;
+ (double)roundCount:(unsigned long long)a0 toSignificantFigure:(unsigned long long)a1;
+ (BOOL)_canReportDistributionOfVocabularyStringType:(long long)a0;
+ (void)resetSynapseVocabularyUpdate;
+ (void)logReceivedCount:(unsigned long long)a0 ofVocabularyStringType:(long long)a1;
+ (unsigned long long)_singificantFigureForVocabularyStringType:(long long)a0;

@end
