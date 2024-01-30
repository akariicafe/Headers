@class NSString;

@interface HKInteractiveChartAudioData : NSObject <HKGraphSeriesChartData>

@property (nonatomic) double averageLEQ;
@property (nonatomic) double duration;
@property (retain, nonatomic) HKInteractiveChartAudioData *overviewData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)_durationString:(double)a0;

@end
