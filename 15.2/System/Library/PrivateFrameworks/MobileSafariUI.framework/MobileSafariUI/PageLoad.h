@class NSTimer, NSURL, NSError, NSDate;

@interface PageLoad : NSObject {
    int _status;
    NSTimer *_timer;
    NSDate *_endRenderDate;
    NSDate *_startRenderFrameCountDate;
    NSDate *_endRenderFrameCountDate;
    long long _startRenderFrameCount;
    long long _endRenderFrameCount;
    unsigned long long memoryBeforeWarning;
    unsigned long long memoryAfterWarning;
}

@property (nonatomic) BOOL swapProcess;
@property (retain, nonatomic) NSURL *URL;
@property (retain, nonatomic) NSURL *redirectURL;
@property (retain, nonatomic) NSDate *uiProcessStartDate;
@property (retain, nonatomic) NSDate *webContentProcessStartLoadDate;
@property (retain, nonatomic) NSDate *redirectDate;
@property (retain, nonatomic) NSDate *endLoadDate;
@property (retain, nonatomic) NSDate *firstVisualLayoutDate;
@property (retain, nonatomic) NSDate *domContentLoadedDate;
@property (retain, nonatomic) NSDate *firstMeaningfulPaintDate;
@property (retain, nonatomic) NSDate *allSubresourcesLoadedDate;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) NSDate *startRenderDate;
@property (nonatomic) struct { int nodes; int bytes; } heapBefore;
@property (nonatomic) struct { int nodes; int bytes; } heapAfter;
@property (nonatomic) unsigned long long memoryBeforeWarning;
@property (nonatomic) unsigned long long memoryAfterWarning;
@property (nonatomic) struct CGSize { double width; double height; } contentSizeAtPageLoad;
@property (nonatomic, getter=isTooShortToScroll) BOOL tooShortToScroll;

- (void)setTimer:(id)a0;
- (int)status;
- (id)statusString;
- (void)setStatus:(int)a0;
- (double)framesPerSecond;
- (id)description;
- (id)timer;
- (void).cxx_destruct;
- (void)dealloc;
- (double)renderDuration;
- (void)startRenderTime:(id)a0;
- (id)initWithURL:(id)a0 withProcessSwap:(BOOL)a1;
- (void)startRenderFps:(id)a0;
- (void)finishRenderFps:(id)a0;
- (void)finishRenderTime:(id)a0;

@end
