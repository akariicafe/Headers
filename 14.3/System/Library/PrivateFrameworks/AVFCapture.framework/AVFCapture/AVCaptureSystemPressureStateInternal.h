@class AVFrameRateRange;

@interface AVCaptureSystemPressureStateInternal : NSObject {
    int _figLevel;
    unsigned long long _factors;
    AVFrameRateRange *_recommendedFrameRateRangeForPortrait;
}

@property (readonly) int figLevel;
@property (readonly) unsigned long long factors;
@property (readonly) AVFrameRateRange *recommendedFrameRateRangeForPortrait;

- (void)dealloc;
- (id)initWithFigLevel:(int)a0 factors:(unsigned long long)a1 recommendedFrameRateRangeForPortrait:(id)a2;

@end
