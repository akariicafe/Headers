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
    HistStatLinkedListNode *_statLinkedListHead;
    HistStatLinkedListNode *_statLinkedListTail;
    HistStatLinkedListNode *_statLinkedListCurr;
    int _tempMode;
    unsigned short _bufSize;
    unsigned char _histMinMaxBinCenter;
    unsigned char _histPrintData;
}

@property (readonly) float *normHistHeight;
@property (readonly) float *histBinCentroidInPQ;
@property (readonly) float minVal;
@property (readonly) float maxVal;
@property (readonly) float avgVal;
@property (readonly) float stdVal;
@property (readonly) int numPrct;
@property (readonly) float *pcntVal;
@property (readonly) float *prctVal;
@property (readonly) BOOL isDataValid;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (long long)getHistStatFromLayer:(struct __IOSurface { } *)a0 HDRMode:(unsigned int)a1 temporalMode:(int)a2 iirAlpha:(float)a3;
- (long long)debugHistDataFromLayer:(struct __IOSurface { } *)a0;
- (void)mapBinFromNarrowRangeToFullRange;
- (long long)sanityCheckAndGetDataFromHist;
- (void)normalizeHistDataForHDR10Input;
- (void)normalizeHistDataAndMapToPQForHLGInput;
- (void)normalizeHistDataForDoViInput;
- (void)computeFrameMinFromHistData;
- (void)computeFrameMaxFromHistData;
- (void)computeFrameAvgFromHistData;
- (void)computeFrameStdFromHistData;
- (void)findStatLinkedListNode:(long long)a0;
- (BOOL)toneChanged:(float)a0 Prev:(float)a1 Threshold:(float)a2;
- (BOOL)sceneChanged:(float *)a0 Prev:(float *)a1 Threshold:(float)a2 CorrCoeff:(float *)a3;
- (float)FIRFilterHistStat:(float)a0 statBuffer:(float *)a1 currIndex:(int)a2 prevIndex:(int)a3 numOfProcessedFrames:(int)a4;
- (void)setbufSize;
- (void)getSettingsFromDefaultsWrite;
- (void)setHistBasedToneMappingTemporalType:(unsigned int)a0 temporalMode:(int)a1;
- (long long)getHistDataFromLayer:(struct __IOSurface { } *)a0;
- (long long)normalizeHistData:(unsigned int)a0;
- (long long)computeFrameStatFromHistData;
- (long long)computeFramePrctFromHistData;
- (long long)temporalProcessHistStat:(long long)a0 iirAlpha:(float)a1;

@end
