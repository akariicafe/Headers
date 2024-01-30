@class NSError, NSDate;

@interface HMMLogEvent : NSObject {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (nonatomic, getter=isSubmitted) BOOL submitted;
@property (copy) NSDate *endDate;
@property (nonatomic) unsigned long long endTimeMilliseconds;
@property (copy) NSError *error;
@property (readonly) double durationInMilliseconds;
@property (copy) NSDate *startDate;
@property (readonly) unsigned long long tickBasedDurationInMilliseconds;
@property (readonly) unsigned long long startTimeMilliseconds;

+ (id)alloc;

- (id)init;
- (void).cxx_destruct;
- (BOOL)shouldSubmit;
- (void)markEndTime;
- (void)submitAtDate:(id)a0;

@end
