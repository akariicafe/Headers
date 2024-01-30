@class NSString, NSMutableDictionary;

@interface CAMAnalyticsEvent : NSObject

@property (readonly, nonatomic) NSMutableDictionary *_eventMap;
@property (readonly, nonatomic) NSString *uuid;
@property (readonly, nonatomic) NSString *eventName;

+ (id)durationRangeStringForDuration:(double)a0;
+ (id)bucketedGigabytesStringForBytes:(long long)a0;
+ (id)bucketedGigabytesStringForBytes:(long long)a0 allowZero:(BOOL)a1 minPositiveValue:(double)a2 maxValue:(double)a3;
+ (double)bucketedPowerOf2ForValue:(double)a0 allowZero:(BOOL)a1 minPositiveValue:(double)a2 maxValue:(double)a3;
+ (double)gigabytesForBytes:(long long)a0;

- (void)publish;
- (id)initWithEvent:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
