@class NSIndexSet, _CDPModelTuningState, _CDPSimpleModel;

@interface _CDPModelTuning : NSObject

@property (copy, nonatomic) id /* block */ scorer;
@property (copy, nonatomic) id /* block */ heartBeat;
@property (retain, nonatomic) _CDPSimpleModel *model;
@property (retain, nonatomic) NSIndexSet *testIndices;
@property (readonly, nonatomic) int numberOfGridTests;
@property (readonly, nonatomic) _CDPModelTuningState *currentState;

+ (id /* block */)f1Score;
+ (id /* block */)fScoreWithBeta:(float)a0;
+ (id /* block */)f2Score;
+ (void)_addArray:(float *)a0 size:(unsigned long long)a1 inArray:(float *)a2;
+ (void)_cumulativeSumOfArray:(float *)a0 size:(unsigned long long)a1 reverse:(BOOL)a2;
+ (void)_enumerateSubsetsOfSet:(unsigned int *)a0 setLength:(unsigned long long)a1 index:(unsigned long long)a2 subset:(unsigned int *)a3 subsetLength:(unsigned long long)a4 index:(unsigned long long)a5 callback:(id /* block */)a6;
+ (void)_enumerateSubsetsOfSet:(unsigned int *)a0 setLength:(unsigned long long)a1 withSize:(unsigned long long)a2 callback:(id /* block */)a3;
+ (unsigned int *)_newSetDifference:(unsigned int *)a0 setLength:(unsigned long long)a1 subset:(unsigned int *)a2 subsetLength:(unsigned long long)a3;

- (void).cxx_destruct;
- (float)_testModelWithThreshold:(float *)a0;
- (void)resumeTuningWithState:(id)a0;

@end
