@class NSUUID, NSError, NSDate;

@interface HMDLogEvent : HMFObject

@property (nonatomic, getter=isSubmitted) BOOL submitted;
@property (retain, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) NSUUID *eventType;
@property (retain, nonatomic) NSError *eventError;
@property (readonly) double durationInMilliseconds;
@property (retain, nonatomic) NSDate *startDate;

+ (id)stringForSource:(unsigned long long)a0;

- (id)initWithEventType:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)submitAtDate:(id)a0 error:(id)a1;
- (id)bucketedDurationWithRoundInterval:(id)a0;
- (void)populateErrorDetails:(id)a0;

@end
