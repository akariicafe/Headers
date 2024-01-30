@class PAAccessInterval;

@interface PACoalescingIntervalState : NSObject {
    unsigned long long _continuousStartTime;
    unsigned long long _absoluteStartTime;
    unsigned long long _lastCoalescedTime;
}

@property (readonly, nonatomic) PAAccessInterval *interval;
@property (readonly, nonatomic) double idleTime;
@property (readonly, nonatomic) double timestampAdjustment;

- (void)touch;
- (id)description;
- (void).cxx_destruct;
- (id)initWithInterval:(id)a0;

@end
