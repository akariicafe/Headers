@class NSArray, NSString, ARImageData;

@interface ARMLImageDownScalingResultData : NSObject <ARResultData>

@property (readonly, nonatomic) double timestamp;
@property (readonly, nonatomic) long long rotationOfResultTensor;
@property (readonly, copy, nonatomic) NSArray *downScalingResults;
@property (readonly, nonatomic) ARImageData *originalImageData;
@property (retain, nonatomic) ARMLImageDownScalingResultData *latestResizedUltraWideImageData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithResultDataArray:(id)a0 timestamp:(double)a1 rotationOfResultTensor:(long long)a2 originalImageData:(id)a3;

@end
