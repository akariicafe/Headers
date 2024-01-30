@class NSString;

@interface BMSource : NSObject

@property (readonly, nonatomic) NSString *identifier;

- (id)init;
- (void).cxx_destruct;
- (void)logMetrics;
- (void)sendEvent:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)sendEvent:(id)a0 timestamp:(double)a1;

@end
