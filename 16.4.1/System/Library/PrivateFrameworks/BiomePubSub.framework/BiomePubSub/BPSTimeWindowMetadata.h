@class NSDateInterval;

@interface BPSTimeWindowMetadata : NSObject <BPSWindowMetadata>

@property (readonly, nonatomic) NSDateInterval *dateInterval;

+ (id)new;

- (id)initWithDateInterval:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
