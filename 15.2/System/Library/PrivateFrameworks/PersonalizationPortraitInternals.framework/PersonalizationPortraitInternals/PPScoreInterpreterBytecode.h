@class NSArray;

@interface PPScoreInterpreterBytecode : NSObject {
    struct unique_ptr<std::vector<PPSubscoreIdentifier>, std::default_delete<std::vector<PPSubscoreIdentifier>>> { struct __compressed_pair<std::vector<PPSubscoreIdentifier> *, std::default_delete<std::vector<PPSubscoreIdentifier>>> { void *__value_; } __ptr_; } _subscoreComputeOrder;
    NSArray *_bytecodeDataBySubscoreTypeAndIndex;
    NSArray *_bytecodeRetainedObjectSlots;
    struct unique_ptr<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>, std::default_delete<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>>> { struct __compressed_pair<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>> *, std::default_delete<std::vector<std::vector<std::unordered_set<PPSubscoreIdentifier>>>>> { void *__value_; } __ptr_; } _subscoreDependencies;
}

@property (readonly, nonatomic) const struct __CFBitVector { } *scalarScoreInputsNeeded;
@property (readonly, nonatomic) const struct __CFBitVector { } *arrayScoreInputsNeeded;
@property (readonly, nonatomic) const struct __CFBitVector { } *objectScoreInputsNeeded;

+ (id)scoreInterpreterParseRootFromAsset:(id)a0 scalarSubscoreCount:(unsigned long long *)a1 arraySubscoreCount:(unsigned long long *)a2 objectSubscoreCount:(unsigned long long *)a3;
+ (id)bytecodeFromAsset:(id)a0;
+ (id)bytecodeFromFactorName:(id)a0 namespaceName:(id)a1;

- (void).cxx_destruct;
- (id)init;
- (id)initWithParseRoot:(id)a0 scalarSubscoreCount:(unsigned long long)a1 arraySubscoreCount:(unsigned long long)a2 objectSubscoreCount:(unsigned long long)a3;
- (void)dealloc;
- (id).cxx_construct;

@end
