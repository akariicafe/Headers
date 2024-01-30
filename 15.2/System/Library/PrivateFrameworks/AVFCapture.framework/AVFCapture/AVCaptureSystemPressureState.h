@class NSString, AVCaptureSystemPressureStateInternal;

@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

+ (void)initialize;

- (id)initWithFigLevel:(int)a0 factors:(unsigned long long)a1 recommendedFrameRateRangeForPortrait:(id)a2;
- (int)figLevel;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)spiDebugDescription;
- (void)dealloc;
- (id)recommendedFrameRateRangeForPortrait;
- (id)debugDescription;

@end
