@class NSDateInterval;

@interface BPSTimeWindowMetadata : NSObject <BPSWindowMetadata>

@property (readonly, nonatomic) NSDateInterval *dateInterval;

- (id)initWithDateInterval:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
