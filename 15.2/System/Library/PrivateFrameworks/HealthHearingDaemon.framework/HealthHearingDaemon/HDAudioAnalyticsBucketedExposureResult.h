@class NSNumber;

@interface HDAudioAnalyticsBucketedExposureResult : NSObject

@property (retain, nonatomic) NSNumber *audioExposureLEQ;
@property (retain, nonatomic) NSNumber *audioExposureDuration;
@property (retain, nonatomic) NSNumber *audioExposureDose;

- (void).cxx_destruct;
- (id)initWithLEQ:(id)a0 duration:(id)a1 dose:(id)a2;

@end
