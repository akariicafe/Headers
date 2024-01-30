@interface BSMonotonicReferenceTime : NSObject {
    double _startTimeStamp;
}

@property (readonly, nonatomic) double timeIntervalSinceNow;
@property (readonly, nonatomic) double timeIntervalToNow;

+ (id)distantPast;
+ (id)referenceTimeWithTimeIntervalSinceNow:(double)a0;
+ (id)distantFuture;
+ (id)now;
+ (id)referenceTimeForDate:(id)a0;

- (id)date;
- (double)timeIntervalSinceReferenceTime:(id)a0;

@end
