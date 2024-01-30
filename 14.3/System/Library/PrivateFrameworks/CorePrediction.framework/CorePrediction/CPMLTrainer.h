@class NSDictionary, CPMLSchema, CPMLDB, CPMLStorageManager;
@protocol CPMLAlgorithmProtocol;

@interface CPMLTrainer : NSObject {
    BOOL shouldFail;
    struct sqlite3 { } *modelDB;
    NSDictionary *modelPlist;
    CPMLDB *cpmlDB;
    struct CPMLCDB { struct CPMLStatistics *x0; struct sqlite3 *x1; struct sqlite3 *x2; struct CPMLIterator *x3; struct CPMLRemapper *x4; struct CPMLTunableData *x5; } *cpCDB;
    struct CPMLAlgorithm { void /* function */ **x0; char x1[32]; void *x2; struct CPMLCDB *x3; struct CPMLDelegate *x4; struct CPMLDelegateEngine *x5; struct CPMLTunableData *x6; struct CPMLIterator *x7; struct CPMLSerialization *x8; } *cpMLAlgo;
    struct CPMLRemapper { BOOL x0; BOOL x1; BOOL x2; struct sqlite3 *x3; struct CPMLStatistics *x4; struct vector<int, std::__1::allocator<int> > *x5; struct vector<int, std::__1::allocator<int> > *x6; } *cpRemapper;
    CPMLSchema *cpmlSchema;
    struct CPMLStatistics { struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x0; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x1; struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x2; struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x3; struct vector<int, std::__1::allocator<int> > { int *x0; int *x1; struct __compressed_pair<int *, std::__1::allocator<int> > { int *x0; } x2; } x4; int x5; int x6; int x7; int x8; BOOL x9; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x10; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x11; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x12; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x13; struct vector<double, std::__1::allocator<double> > { double *x0; double *x1; struct __compressed_pair<double *, std::__1::allocator<double> > { double *x0; } x2; } x14; void *x15; } *trainerCPStatistics;
    struct CPMLSerialization { void /* function */ **x0; BOOL x1; int x2; int x3; void *x4; struct sqlite3 *x5; } *trainerCPSerializer;
    struct CPMLTunableData { int x0; void *x1; void *x2; } *cpTuneableData;
    int mapFunction;
    struct CPMLDelegate { void *x0; void *x1; } *_cpmlDelegate;
    CPMLStorageManager *_storageManager;
    id<CPMLAlgorithmProtocol> _theDelegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)train:(BOOL)a0;
- (id)init:(id)a0 withModelDBPath:(id)a1 withPropertyList:(id)a2;
- (void)buildTrainingMachineLearningAlgorithm:(id)a0;
- (id)fileProtectionClassRequest:(id)a0;
- (id)getSolution;

@end
