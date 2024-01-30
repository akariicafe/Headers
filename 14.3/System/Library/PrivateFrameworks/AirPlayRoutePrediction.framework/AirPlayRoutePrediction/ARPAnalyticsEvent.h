@class NSString;

@interface ARPAnalyticsEvent : NSObject

@property (copy, nonatomic) NSString *prediction;
@property (copy, nonatomic) NSString *predictionReason;
@property (copy, nonatomic) NSString *suppressionReason;
@property (nonatomic) BOOL predictionCorrect;
@property (copy, nonatomic) NSString *predictedDevice;
@property (copy, nonatomic) NSString *actualDevice;
@property (copy, nonatomic) NSString *correction;
@property (copy, nonatomic) NSString *correctionTiming;
@property (copy, nonatomic) NSString *failure;
@property (nonatomic) unsigned long long numberOfMicrolocations;

+ (id)feedbackEventsFromAppUsageEvents:(id)a0 playingEvents:(id)a1 microLocationEvents:(id)a2 feedbackEvents:(id)a3;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)analyticsDictionary;

@end
