@class NSString;

@interface ARMattingCoefficientsData : NSObject <ARResultData>

@property (nonatomic) double timestamp;
@property (readonly, nonatomic) struct __CVBuffer { } *coefficientsBuffer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithTimestamp:(double)a0 coefficientsBuffer:(struct __CVBuffer { } *)a1;

@end
