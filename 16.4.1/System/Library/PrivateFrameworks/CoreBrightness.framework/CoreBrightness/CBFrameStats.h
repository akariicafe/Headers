@class NSMutableArray, CAWindowServerDisplay, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_log;

@interface CBFrameStats : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    CAWindowServerDisplay *_windowServerDisplay;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _rtplcFrameDelayedNitsTable;
    struct vector<float, std::allocator<float>> { float *__begin_; float *__end_; struct __compressed_pair<float *, std::allocator<float>> { float *__value_; } __end_cap_; } _rtplcFrameDelayedAPCETable;
    struct PeakAPCE { float current; float cap; float timeTaperConstant; float windowSize; float windowStart; NSObject<OS_dispatch_source> *recoveryTimer; float recoveryMultiplier; float recoveryWindowSize; } _peakAPCE;
    struct RTPLCCapApplied { BOOL previous; float count; float triggerCount; } _rtplcCapApplied;
    float _previousFramePresentationTime;
    NSObject<OS_os_log> *_logHandle;
    NSMutableArray *_frameArray;
    float _lastFrameAPCE;
}

@property double movingAverageDuration;
@property (readonly) float scaleFactor;

- (id).cxx_construct;
- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)stopMonitoring;
- (void)enableFrameInfoLogging:(BOOL)a0;
- (float)getMovingAverage;
- (float)getPeakAPCE;
- (float)getPeakAPCECap;
- (void)initialiseWindowServerDisplay;
- (void)processFrameInfo:(struct { unsigned int x0; unsigned int x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned int x6; BOOL x7; BOOL x8; BOOL x9; float x10; float x11; float x12; unsigned long long x13; })a0;
- (BOOL)shouldPop;
- (void)startMonitoring:(id /* block */)a0;

@end
