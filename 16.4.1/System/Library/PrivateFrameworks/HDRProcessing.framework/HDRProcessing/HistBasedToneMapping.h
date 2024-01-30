@class HistStatLinkedListNode;

@interface HistBasedToneMapping : NSObject {
    void *_hist;
    const char *_histDataPtr;
    long long _streamId;
    int _minHistBin;
    int _maxHistBin;
    unsigned long long _sumHist;
    float *_binCenter;
    float *_hlgBinCenterInPQ;
    int *_fullRangeBinIdx;
    unsigned char _histMinMaxBinCenter;
    unsigned char _histPrintData;
    unsigned long long _frameNumber;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_fpHistDump;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_fpStatDump;
    struct __sFILE { char *x0; int x1; int x2; short x3; short x4; struct __sbuf { char *x0; int x1; } x5; int x6; void *x7; void /* function */ *x8; void /* function */ *x9; void /* function */ *x10; void /* function */ *x11; struct __sbuf { char *x0; int x1; } x12; struct __sFILEX *x13; int x14; unsigned char x15[3]; unsigned char x16[1]; struct __sbuf { char *x0; int x1; } x17; int x18; long long x19; } *_fpAplDump;
}

@property (readonly) float *normHistHeight;
@property (readonly) float *histBinCentroidInPQ;
@property (readonly) float *histBinCentroidInLinear;
@property (readonly) float minVal;
@property (readonly) float maxVal;
@property (readonly) float avgVal;
@property (readonly) float stdVal;
@property (readonly) int numPrct;
@property (readonly) float *pcntVal;
@property (readonly) float *prctVal;
@property (readonly) float avgPixelLevel;
@property (readonly) BOOL isDataValid;
@property (readonly) BOOL isSceneChanged;
@property (readonly) HistStatLinkedListNode *statLinkedListHead;
@property (readonly) HistStatLinkedListNode *statLinkedListTail;
@property (readonly) HistStatLinkedListNode *statLinkedListCurr;
@property (readonly) int tempMode;
@property (readonly) unsigned short bufSize;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (float)FIRFilterHistStat:(float)a0 statBuffer:(float *)a1 currIndex:(int)a2 prevIndex:(int)a3 numOfProcessedFrames:(int)a4;
- (float)FIRFilterHistStat:(double)a0 statBuffer:(double *)a1 currIndex:(int)a2 numOfProcessedFrames:(int)a3;
- (float)computeFrameAPLFromPQHistData:(float *)a0;
- (void)computeFrameAvgFromHistData;
- (void)computeFrameMaxFromHistData;
- (void)computeFrameMinFromHistData;
- (long long)computeFramePrctFromHistData;
- (long long)computeFrameStatFromHistData;
- (void)computeFrameStdFromHistData;
- (long long)debugHistDataFromLayer:(struct __IOSurface { } *)a0;
- (void)findStatLinkedListNode:(long long)a0;
- (long long)getHistDataFromLayer:(struct __IOSurface { } *)a0;
- (const char *)getHistDataPtr;
- (long long)getHistStatFromLayer:(struct __IOSurface { } *)a0 HDRMode:(unsigned int)a1 transferFunction:(int)a2 temporalMode:(int)a3 iirAlpha:(float)a4 frameNumber:(unsigned long long)a5;
- (void)getSettingsFromDefaultsWrite;
- (unsigned long long)getSumHist;
- (void)mapBinFromNarrowRangeToFullRange;
- (long long)normalizeHistData:(unsigned int)a0 transferFunction:(int)a1;
- (void)normalizeHistDataAndMapToPQForHLGInput:(int)a0;
- (void)normalizeHistDataForDoViInput;
- (void)normalizeHistDataForHDR10Input;
- (long long)sanityCheckAndGetDataFromHist;
- (BOOL)sceneChanged:(float *)a0 Prev:(float *)a1 Threshold:(float)a2 CorrCoeff:(float *)a3;
- (void)setHistBasedToneMappingTemporalType:(unsigned int)a0 temporalMode:(int)a1;
- (void)setbufSize;
- (long long)temporalProcessHistStat:(long long)a0 iirAlpha:(float)a1;
- (BOOL)toneChanged:(float)a0 Prev:(float)a1 Threshold:(float)a2;

@end
