@class NSMutableDictionary;

@interface NWActivityAlgosScore : NSObject

@property (retain, nonatomic) NSMutableDictionary *recordedScores;

+ (id)sharedInstance;
+ (void)processingComplete;
+ (void)processNWActivitySuperMetric:(id)a0;

- (void).cxx_destruct;
- (id)init;
- (void)_processingComplete;
- (void)_processNWActivitySuperMetric:(id)a0;
- (id)_processNWActivityConnections:(id)a0;
- (id)_scoreDictForBundleID:(id)a0 effectiveBundleID:(id)a1;
- (void)_processNWActivityTransactions:(id)a0 scoreDict:(id)a1;
- (void)_postSymptomFor:(id)a0 withScore:(unsigned long long)a1;

@end
