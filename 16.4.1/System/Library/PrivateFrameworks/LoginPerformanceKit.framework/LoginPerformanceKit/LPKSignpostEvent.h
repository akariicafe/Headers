@class NSString, NSDate;

@interface LPKSignpostEvent : NSObject

@property (retain, nonatomic) NSDate *startDate;
@property (retain, nonatomic) NSDate *endDate;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *processName;

- (void).cxx_destruct;
- (void)_calculateDurationIfNeeded;

@end
