@class NSNumber;

@interface HUTriggerDurationPickerValue : NSObject

@property (readonly, nonatomic) NSNumber *duration;
@property (readonly, nonatomic) BOOL hasDuration;

+ (id)valueWithDuration:(double)a0;
+ (id)valueWithNoDuration;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDuration:(id)a0;

@end
