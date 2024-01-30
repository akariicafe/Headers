@class MLTreeEnsembleClassifier, NSMutableArray, NSMutableOrderedSet;

@interface MLGKDecisionTree : NSObject {
    void *_trc;
    MLTreeEnsembleClassifier *_treeClassifier;
}

@property (retain, nonatomic) NSMutableArray *_attributes;
@property (retain, nonatomic) NSMutableOrderedSet *_objectStore;

- (void).cxx_destruct;
- (id)_init;
- (id)_initWithFlattenedTree:(id)a0;
- (BOOL)_saveModelAssetWithModelToPath:(id)a0 withError:(id)a1;
- (void)_loadModelAssetWithModelAtPath:(id)a0 withError:(id)a1;
- (id)_makeInferenceFromAnswers:(id)a0 withError:(id)a1;
- (void)dealloc;

@end
