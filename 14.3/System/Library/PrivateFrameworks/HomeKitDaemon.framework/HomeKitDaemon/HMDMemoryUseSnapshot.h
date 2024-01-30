@class NSString, NSNumber, NSDate;

@interface HMDMemoryUseSnapshot : NSObject

@property (readonly, nonatomic) NSDate *date;
@property (readonly, nonatomic) NSString *reason;
@property (readonly, nonatomic) NSNumber *memoryUsage;
@property (readonly, nonatomic) NSNumber *maxMemoryUsage;

+ (id)memoryUseSnapshotWithReason:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)__initWithReason:(id)a0 memoryUsage:(id)a1 maxMemoryUsage:(id)a2;

@end
