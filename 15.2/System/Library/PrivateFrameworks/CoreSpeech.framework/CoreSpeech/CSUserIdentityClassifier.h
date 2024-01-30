@interface CSUserIdentityClassifier : NSObject

+ (id)pickTopScoringProfileIdFromScores:(id)a0;
+ (unsigned long long)classifyUserIdentityFor:(id)a0 withScores:(id)a1 withAsset:(id)a2;
+ (id)stringFromClassificationCategory:(unsigned long long)a0;

@end
