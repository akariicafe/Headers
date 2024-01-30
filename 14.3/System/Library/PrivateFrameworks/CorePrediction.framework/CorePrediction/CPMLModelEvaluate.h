@class CPMLStorageManager, NSString, CPMLSchema, NSNumber, NSMutableArray;
@protocol CPMLAlgorithmProtocol;

@interface CPMLModelEvaluate : NSObject {
    BOOL enableCacheString;
    BOOL keepInMemory;
    BOOL shouldFail;
    struct sqlite3 { } *db;
    int countRows;
    NSMutableArray *modelSchema;
    NSMutableArray *vectorPositions;
    NSNumber *maxRemoveTrainingRow;
    NSString *serializeFunction;
    NSString *machineLearningAlgo;
    struct CPMLAlgorithm { void /* function */ **x0; char x1[32]; void *x2; struct CPMLCDB *x3; struct CPMLDelegate *x4; struct CPMLDelegateEngine *x5; struct CPMLTunableData *x6; struct CPMLIterator *x7; struct CPMLSerialization *x8; } *cpMLAlgo;
    struct CPMLSerialization { void /* function */ **x0; BOOL x1; int x2; int x3; void *x4; struct sqlite3 *x5; } *trainerCPDeSerializer;
    struct CPMLRemapper { BOOL x0; BOOL x1; BOOL x2; struct sqlite3 *x3; struct CPMLStatistics *x4; struct vector<int, std::__1::allocator<int> > *x5; struct vector<int, std::__1::allocator<int> > *x6; } *cpRemapper;
    CPMLSchema *cpmlSchema;
    struct CPMLStatistics { struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x0; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x1; struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x2; struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x3; struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x4; int x5; int x6; int x7; int x8; BOOL x9; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x10; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x11; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x12; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x13; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x14; void *x15; } *trainerCPStatistics;
    struct CPMLDelegate { void *x0; void *x1; } *_cpmlDelegate;
    struct CPMLTunableData { int x0; void *x1; void *x2; } *cpTuneableData;
    int mapFunction;
    struct vector<int, std::__1::allocator<int> > { int *__begin_; int *__end_; struct __compressed_pair<int *, std::__1::allocator<int> > { int *__value_; } __end_cap_; } boundedRemappedValues;
    struct CPMLDelegateEngine { void *x0; void *x1; } *_delegateEngine;
    CPMLStorageManager *_storageManager;
    id<CPMLAlgorithmProtocol> _delegateAlgorithm;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id).cxx_construct;
- (BOOL)updateModel:(id)a0;
- (id)initWithModel:(id)a0 withPropertyList:(id)a1;
- (id)fileProtectionClassRequest:(id)a0;
- (void *)getModelData;
- (id)evalString:(id)a0;
- (id)evalNSObjectV:(id)a0;
- (id)evalArray:(id)a0;
- (id)evalDict:(id)a0;
- (void)boundResult:(id)a0;
- (void)setCPMLAlgorithm:(id)a0;
- (void)setCPMLAlgorithmEngine:(id)a0;
- (void)buildEvaluateMachineLearningAlgorithm;
- (void)doRemapToFeatureVector:(struct CPMLFeatureVector { int x0; struct VectorClass { struct vector<int, std::__1::allocator<int> > *x0; struct vector<double, std::__1::allocator<double> > *x1; } x1; struct vector<VectorClass, std::__1::allocator<VectorClass> > { struct VectorClass *x0; struct VectorClass *x1; struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass> > { struct VectorClass *x0; } x2; } x2; double x3; struct vector<VectorClass, std::__1::allocator<VectorClass> > { struct VectorClass *x0; struct VectorClass *x1; struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass> > { struct VectorClass *x0; } x2; } x4; struct vector<ProbIndex, std::__1::allocator<ProbIndex> > { struct ProbIndex *x0; struct ProbIndex *x1; struct __compressed_pair<ProbIndex *, std::__1::allocator<ProbIndex> > { struct ProbIndex *x0; } x2; } x5; } *)a0 withPositionID:(unsigned long long)a1 withMaxCol:(unsigned long long)a2 withValue:(id)a3;
- (id)doEvaluate:(struct CPMLFeatureVector { int x0; struct VectorClass { struct vector<int, std::__1::allocator<int> > *x0; struct vector<double, std::__1::allocator<double> > *x1; } x1; struct vector<VectorClass, std::__1::allocator<VectorClass> > { struct VectorClass *x0; struct VectorClass *x1; struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass> > { struct VectorClass *x0; } x2; } x2; double x3; struct vector<VectorClass, std::__1::allocator<VectorClass> > { struct VectorClass *x0; struct VectorClass *x1; struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass> > { struct VectorClass *x0; } x2; } x4; struct vector<ProbIndex, std::__1::allocator<ProbIndex> > { struct ProbIndex *x0; struct ProbIndex *x1; struct __compressed_pair<ProbIndex *, std::__1::allocator<ProbIndex> > { struct ProbIndex *x0; } x2; } x5; } *)a0 withBoundedList:(struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } *)a1;
- (int)getAttributeType:(id)a0;
- (void)constructVector:(struct CPMLFeatureVector { int x0; struct VectorClass { struct vector<int, std::__1::allocator<int> > *x0; struct vector<double, std::__1::allocator<double> > *x1; } x1; struct vector<VectorClass, std::__1::allocator<VectorClass> > { struct VectorClass *x0; struct VectorClass *x1; struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass> > { struct VectorClass *x0; } x2; } x2; double x3; struct vector<VectorClass, std::__1::allocator<VectorClass> > { struct VectorClass *x0; struct VectorClass *x1; struct __compressed_pair<VectorClass *, std::__1::allocator<VectorClass> > { struct VectorClass *x0; } x2; } x4; struct vector<ProbIndex, std::__1::allocator<ProbIndex> > { struct ProbIndex *x0; struct ProbIndex *x1; struct __compressed_pair<ProbIndex *, std::__1::allocator<ProbIndex> > { struct ProbIndex *x0; } x2; } x5; } *)a0 withColumnPosition:(unsigned long long)a1 maxColNumber:(unsigned long long)a2 withValue:(id)a3;
- (id)evalCTypesV:(char *)a0;

@end
