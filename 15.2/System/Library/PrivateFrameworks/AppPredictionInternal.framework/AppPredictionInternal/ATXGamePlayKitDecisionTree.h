@class ATXGamePlayKitDecisionNode, ATXGamePlayKitRandomSource, MLGKDecisionTree;

@interface ATXGamePlayKitDecisionTree : NSObject <NSSecureCoding> {
    struct shared_ptr<ATXGamePlayKitCDecisionTree> { struct ATXGamePlayKitCDecisionTree *__ptr_; struct __shared_weak_count *__cntrl_; } _decisionTree;
    BOOL _isInduced;
    MLGKDecisionTree *mlkitDecisionTree;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) ATXGamePlayKitDecisionNode *rootNode;
@property (copy, nonatomic) ATXGamePlayKitRandomSource *randomSource;

+ (void)configureKeyedArchiver:(id)a0;
+ (void)configureKeyedUnarchiver:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id)a1;
- (void)dealloc;
- (id).cxx_construct;
- (id)initWithExamples:(id)a0 actions:(id)a1 attributes:(id)a2 maxDepth:(unsigned long long)a3 minSamplesSplit:(unsigned long long)a4;
- (id)initWithExamples:(id)a0 actions:(id)a1 attributes:(id)a2 maxDepth:(unsigned long long)a3 minSamplesSplit:(unsigned long long)a4 ratioForLeafNodeDecision:(double)a5;
- (id)findActionForAnswers:(id)a0;
- (id)initWithAttribute:(id)a0;
- (id)initWithExamples:(id)a0 actions:(id)a1 attributes:(id)a2;
- (BOOL)exportToURL:(id)a0 error:(id)a1;
- (id)getFlattenedTree;
- (id)findAccuracyWithExamples:(id)a0 actions:(id)a1 attributes:(id)a2;

@end
