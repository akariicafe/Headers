@class NSUUID, SASampleStore, NSString, SATask, SATimestamp, NSMutableDictionary, SAHIDEvent, SAThread, SAOutputStream, NSMutableArray, SASamplePrintOptions;

@interface SASamplePrinter : NSObject {
    SAOutputStream *_stream;
    SASamplePrintOptions *_options;
    BOOL _hasFilterApplied;
    SATimestamp *_reportStartTime;
    SATimestamp *_reportEndTime;
    unsigned long long _reportStartSampleIndex;
    unsigned long long _reportEndSampleIndex;
    unsigned long long _numSamples;
    NSMutableDictionary *_binaryImagesHit;
    NSMutableDictionary *_indexForImage;
    double _minimumSamplingInterval;
    NSMutableArray *_timeJumps;
    BOOL _potentiallyHit65324447;
    BOOL _avoided65324447;
    SAHIDEvent *_targetHIDEvent;
    NSMutableArray *_targetHidStepSamples;
    SATask *_heaviestTask;
    SAThread *_heaviestThread;
}

@property (readonly) SASampleStore *sampleStore;
@property (copy) SASamplePrintOptions *options;
@property (copy) NSString *headerNote;
@property (copy) NSUUID *incidentUUID;
@property BOOL shareWithAppDevs;

- (id)callTreeForSwiftTask:(id)a0 thread:(id)a1 inTask:(id)a2;
- (id)callTreeForTask:(id)a0;
- (void)filterToWallTimeRangeStart:(double)a0 end:(double)a1;
- (id)callTreeForThread:(id)a0 inTask:(id)a1;
- (void)printToStream:(struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *)a0;
- (id)callTreesForThreadsInTask:(id)a0;
- (id)callTreeForDispatchQueue:(id)a0 swiftTask:(id)a1 thread:(id)a2 inTask:(id)a3;
- (void)filterToMachAbsTimeRangeStart:(unsigned long long)a0 end:(unsigned long long)a1;
- (id)initWithSampleStore:(id)a0;
- (id)callTreeForExecutable:(id)a0;
- (id)callTreeForDispatchQueue:(id)a0 andThread:(id)a1 inTask:(id)a2;
- (void)printToMutableData:(id)a0;
- (void).cxx_destruct;
- (void)filterToTimestampRangeStart:(id)a0 end:(id)a1;
- (void)filterToDisplayTimeIndexStart:(unsigned long long)a0 end:(unsigned long long)a1;

@end
