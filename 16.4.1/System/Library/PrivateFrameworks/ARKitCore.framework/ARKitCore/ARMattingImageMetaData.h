@class NSString;

@interface ARMattingImageMetaData : NSObject <ARResultData>

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) struct __CVBuffer { } *downSampledImageBuffer;
@property (readonly, nonatomic) struct __CVBuffer { } *mattingScaleImageBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithTimestamp:(double)a0 downSampledImageBuffer:(struct __CVBuffer { } *)a1 mattingScaleImageBuffer:(struct __CVBuffer { } *)a2;

@end
