@class NSSortDescriptor, NSMutableDictionary, NSArray, NSData, NSObject;
@protocol OS_os_log, OS_dispatch_queue;

@interface PRSharingChoice : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_scores;
    double _lastScoreReportMachContinuousTime;
    double _lastBigHeadFirstReportTime;
    NSData *_lastBigHeadMacAddress;
    NSArray *_lastReportedScores;
    struct SharingImportanceMeasurements { struct vector<NeighborMeasurements, std::allocator<NeighborMeasurements>> { struct NeighborMeasurements *__begin_; struct NeighborMeasurements *__end_; struct __compressed_pair<NeighborMeasurements *, std::allocator<NeighborMeasurements>> { struct NeighborMeasurements *__value_; } __end_cap_; } userSharingInput; } _measurements;
    NSSortDescriptor *_scoreSortDescriptor;
    struct unique_ptr<SharingImportanceManager, std::default_delete<SharingImportanceManager>> { struct __compressed_pair<SharingImportanceManager *, std::default_delete<SharingImportanceManager>> { struct SharingImportanceManager *__value_; } __ptr_; } _estimatorRangeOnly;
}

@property (copy) id /* block */ newScoresHandler;
@property BOOL useRegionBasedEstimator;
@property BOOL currentlyInitiating;
@property (retain, nonatomic) NSObject<OS_os_log> *logger;

- (id).cxx_construct;
- (id)init;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)updateScoresWithNewMeasurement:(const void *)a0;
- (void)addBluetoothProximityEstimate:(struct NeighborMeasurements { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { struct __compressed_pair<std::basic_string<char>::__rep, std::allocator<char>> { struct __rep { union { struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x0; struct __short { char x0[23]; unsigned char x1[0]; unsigned char x2 : 7; unsigned char x3 : 1; } x1; struct __raw { unsigned long long x0[3]; } x2; } x0; } x0; } x0; } x0; double x1; BOOL x2; BOOL x3; double x4; double x5; BOOL x6; int x7; BOOL x8; double x9; BOOL x10; BOOL x11; })a0 currentMachContTime:(double)a1;
- (void)addRoseSolutions:(id)a0 currentMachContTime:(double)a1;
- (void)createEstimators;
- (void)heartbeatTimeout:(double)a0 currentMachContTime:(double)a1 useUpdatedScores:(BOOL)a2;
- (void)reportScoresToClientAlways:(BOOL)a0 useUpdatedScoreList:(BOOL)a1 currentMachContTime:(double)a2;
- (void)updateScoresForTime:(double)a0;

@end
