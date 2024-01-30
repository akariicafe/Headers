@interface _INAggregator : NSObject

+ (double)roundCount:(unsigned long long)a0 toSignificantFigure:(unsigned long long)a1;
+ (BOOL)_canReportDistributionOfVocabularyStringType:(long long)a0;
+ (id)_distributionKeyForVocabularyStringType:(long long)a0;
+ (unsigned long long)_singificantFigureForVocabularyStringType:(long long)a0;
+ (void)logReceivedCount:(unsigned long long)a0 ofVocabularyStringType:(long long)a1;
+ (void)resetSynapseVocabularyUpdate;

@end
