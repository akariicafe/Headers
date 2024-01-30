@interface SGQuickResponsesDistributingCount : NSObject

+ (id)numResponsesForScores:(id)a0 responseCount:(unsigned long long)a1 config:(id)a2;
+ (id)probsForClasses:(id)a0 withCount:(unsigned long long)a1;
+ (unsigned long long)responsesToFillForResponseCount:(unsigned long long)a0 config:(id)a1;
+ (unsigned long long)validClassesForClassCount:(unsigned long long)a0 responseCount:(unsigned long long)a1 config:(id)a2;

@end
