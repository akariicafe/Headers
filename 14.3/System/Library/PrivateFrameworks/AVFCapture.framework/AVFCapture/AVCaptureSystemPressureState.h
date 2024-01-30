@class NSString, AVCaptureSystemPressureStateInternal;

@interface AVCaptureSystemPressureState : NSObject {
    AVCaptureSystemPressureStateInternal *_internal;
}

@property (readonly) NSString *level;
@property (readonly) unsigned long long factors;

+ (void)initialize;

- (id)init;
- (void)dealloc;
- (id)spiDebugDescription;
- (int)figLevel;
- (id)recommendedFrameRateRangeForPortrait;
- (id)initWithFigLevel:(int)a0 factors:(unsigned long long)a1 recommendedFrameRateRangeForPortrait:(id)a2;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)debugDescription;

@end
